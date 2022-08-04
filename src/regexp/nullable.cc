#include <stddef.h>
#include <string>
#include <vector>

#include "src/msg/msg.h"
#include "src/msg/warn.h"
#include "src/regexp/re.h"
#include "src/regexp/rule.h"
#include "src/regexp/tag.h"
#include "src/util/check.h"

namespace re2c {
namespace {

struct StackItem {
    const RE* re; // current sub-RE
    uint8_t succ; // index of the next sucessor to be visited
};

static bool nullable(const RESpec& spec, std::vector<StackItem>& stack, const RE* re0) {
    // the "nullable" status of the last sub-RE visited by DFS
    bool null = false;

    stack.push_back({re0, 0});

    while (!stack.empty()) {
        const StackItem i = stack.back();
        stack.pop_back();

        const RE* re = i.re;
        if (re->kind == RE::Kind::NIL) {
            null = true;
        } else if (re->kind == RE::Kind::SYM) {
            null = false;
        } else if (re->kind == RE::Kind::TAG) {
            null = true;
            // Trailing context is always in top-level concatenation, and sub-RE are visited from
            // left to right. Since we are here, sub-RE to the left of the trailing context is
            // nullable (otherwise we would not recurse into the right sub-RE), therefore the whole
            // RE is nullable.
            if (trailing(spec.tags[re->tag.idx])) {
                DCHECK(stack.size() == 1 && stack.back().re->kind == RE::Kind::CAT);
                stack.pop_back();
                break;
            }
        } else if (re->kind == RE::Kind::ALT) {
            if (i.succ == 0) {
                // recurse into the left sub-RE
                stack.push_back({re, 1});
                stack.push_back({re->alt.re1, 0});
            } else if (!null) {
                // if the left sub-RE is nullable, so is alternative, so stop recursion; otherwise
                // recurse into the right sub-RE
                stack.push_back({re->alt.re2, 0});
            }
        } else if (re->kind == RE::Kind::CAT) {
            if (i.succ == 0) {
                // recurse into the left sub-RE
                stack.push_back({re, 1});
                stack.push_back({re->cat.re1, 0});
            } else if (null) {
                // if the left sub-RE is not nullable, neither is concatenation, so stop recursion;
                // otherwise recurse into the right sub-RE
                stack.push_back({re->cat.re2, 0});
            }
        } else if (re->kind == RE::Kind::ITER) {
            // iteration is nullable if the sub-RE is nullable (zero repetitions is represented with
            // alternative)
            stack.push_back({re->iter.re, 0});
        }
    }

    DCHECK(stack.empty());
    return null;
}

static bool trivially_nullable(const RESpec& spec, const RE* re) {
    // "" { ... }
    if (re->kind == RE::Kind::NIL) return true;

    // "" / ... { ... }
    if (re->kind == RE::Kind::CAT
            && re->cat.re1->kind == RE::Kind::NIL
            && re->cat.re2->kind == RE::Kind::CAT
            && re->cat.re2->cat.re1->kind == RE::Kind::TAG
            && trailing(spec.tags[re->cat.re2->cat.re1->tag.idx])) return true;

    return false;
}

} // anonymous namespace

// Warn about rules that match empty string (including rules with nonempty trailing context). False
// positives on partially self-shadowed rules like `[^]?`.
void warn_nullable(const RESpec& spec, const std::string& cond) {
    // rule for <> is special -- it doesn't have a regexp
    if (cond == "0") return;

    std::vector<StackItem> stack;
    const size_t nre = spec.res.size();
    for (size_t i = 0; i < nre; ++i) {
        const RE* re = spec.res[i];
        if (trivially_nullable(spec, re)) {
            // Exclude trivial obviously nullable cases like "", as they are often used as a
            // non-consuming default rule. This also captures empty character classes, but they are
            // covered by another warning.
        } else if (nullable(spec, stack, re)) {
            spec.msg.warn.match_empty_string(spec.rules[i].semact->loc, cond);
        }
    }
}

} // namespace re2c
