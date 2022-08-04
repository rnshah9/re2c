#ifndef _RE2C_AST_PARSE_
#define _RE2C_AST_PARSE_

#include <string>
#include <vector>

#include "src/constants.h"
#include "src/parse/ast.h"
#include "src/parse/scanner.h"
#include "src/util/attribute.h"

namespace re2c {

class Scanner;
struct Opt;

struct spec_t {
    std::string name;

    // Normal rules specified in this block or inherited from other blocks.
    std::vector<AstRule> rules;

    // Special rules *, $ and <!> specified in this block.
    std::vector<const SemAct*> defs;
    std::vector<const SemAct*> eofs;
    std::vector<const SemAct*> setup;

    // Special rules *, $ and <!>  inherited from other blocks.
    std::vector<const SemAct*> inherited_defs;
    std::vector<const SemAct*> inherited_eofs;
    std::vector<const SemAct*> inherited_setup;

    size_t def_rule;
    size_t eof_rule;

    explicit spec_t(const std::string& n)
        : name(n),
          rules(),
          defs(),
          eofs(),
          setup(),
          inherited_defs(),
          inherited_eofs(),
          inherited_setup(),
          def_rule(Rule::NONE),
          eof_rule(Rule::NONE) {}
};

using specs_t = std::vector<spec_t>;

struct RulesBlock {
    std::string name;
    const opt_t* opts;
    specs_t specs;

    RulesBlock(const std::string& name, const opt_t* opts, const specs_t& specs);
    FORBID_COPY(RulesBlock);
};

struct RulesBlocks {
    std::vector<RulesBlock*> blocks;

  public:
    RulesBlocks();
    ~RulesBlocks();
    bool empty() const;
    void add(const std::string& name, const opt_t* opts, const specs_t& specs);
    const RulesBlock* find(const std::string& name) const;
    const opt_t* last_opts() const;
};

struct context_t {
    Scanner& input;
    specs_t& specs;
    Opt& opts;
    const RulesBlocks& rblocks;
    bool lexer_error;
};

spec_t& find_or_add_spec(specs_t& specs, const std::string& name);
Ret use_block(context_t& context, const std::string& name) NODISCARD;
Ret check_and_merge_special_rules(specs_t& specs, const opt_t* opts, Msg& msg, Ast& ast) NODISCARD;
Ret parse(
        Scanner& input, specs_t& specs, Opt& opts, const RulesBlocks& rblocks, Ast& ast) NODISCARD;

} // namespace re2c

#endif // _RE2C_AST_PARSE_
