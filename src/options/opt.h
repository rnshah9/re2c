#ifndef _RE2C_CONF_OPT_
#define _RE2C_CONF_OPT_

#include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>

#include "src/constants.h"
#include "src/encoding/enc.h"
#include "src/options/symtab.h"
#include "src/util/attribute.h"
#include "src/util/forbid_copy.h"

namespace re2c {

// note [constant and mutable options]
//
// Some options are immutable (target, output files; global switches like conditions, reuse mode,
// storable states; support of flex syntax, etc.). These options are passed as command-line
// arguments and never change. It is safe to read them from any program point after parsing
// command-line arguments.
//
// Other options are configurable; they have block scope (may be specified anywhere inside of a
// block and still affect the whole block). Reading mutable options of yet unparsed block is not
// allowed because they may affect the way RE2C parses current block (RE2C would be tempted to base
// decisions on the latest option value, which may not be the final one).
//
// RE2C allows to set configurations anywhere inside of a block (in the beginning, intermixed with
// rules, in the end): they will affect the whole block anyway. Therefore it is not allowed to read
// configurations until the whole block has been parsed. Immutable options, on the other hand, are
// accessible for reading all the time (the parser itself depends on them).

class Msg;
class Scanner;

#define RE2C_SIGIL "@@"

// default backend is C
#ifndef RE2C_LANG
#define RE2C_LANG Lang::C
#endif

#define RE2C_CONSTOPTS \
    CONSTOPT1 (Target, target, Target::CODE) \
    CONSTOPT (Lang, lang, RE2C_LANG) \
    CONSTOPT (bool, bNoGenerationDate, false) \
    CONSTOPT (bool, version, true) \
    CONSTOPT (bool, cFlag, false) \
    CONSTOPT (bool, fFlag, false) \
    CONSTOPT (bool, FFlag, false) \
    CONSTOPT (bool, verbose, false) \
    /* files */ \
    CONSTOPT (std::string, source_file, "") \
    CONSTOPT (std::string, output_file, "") \
    CONSTOPT (std::string, dep_file, "") \
    /* include paths */ \
    CONSTOPT (std::vector<std::string>, incpaths, std::vector<std::string>()) \
    /* input encoding */ \
    CONSTOPT (Enc::Type, input_encoding, Enc::Type::ASCII) \
    /* #line directives */ \
    CONSTOPT (bool, iFlag, false) \
    /* internals */ \
    CONSTOPT (Minimization, dfa_minimization, Minimization::MOORE) \
    CONSTOPT (PosixClosure, posix_closure, PosixClosure::GOR1) \
    CONSTOPT (PosixPrecedenceTable, posix_prectable, PosixPrecedenceTable::COMPLEX) \
    CONSTOPT (FixedTags, fixed_tags, FixedTags::ALL) \
    CONSTOPT (bool, optimize_tags, true) \
    CONSTOPT (bool, backward, false) \
    CONSTOPT (bool, nested_negative_tags, true) \
    CONSTOPT (bool, eager_skip, false) \
    CONSTOPT (bool, loop_switch, false) \
    /* debug */ \
    CONSTOPT (bool, dump_nfa, false) \
    CONSTOPT (bool, dump_dfa_raw, false) \
    CONSTOPT (bool, dump_dfa_det, false) \
    CONSTOPT (bool, dump_dfa_tagopt, false) \
    CONSTOPT (bool, dump_dfa_min, false) \
    CONSTOPT (bool, dump_adfa, false) \
    CONSTOPT (bool, dump_cfg, false) \
    CONSTOPT (bool, dump_interf, false) \
    CONSTOPT (bool, dump_closure_stats, false) \
    CONSTOPT (bool, dump_dfa_tree, false) \
    /* end */

#define RE2C_MUTOPTS \
    /* header file */ \
    MUTOPT1 (std::string, header_file, "") \
    /* regular expressions */ \
    MUTOPT (Enc, encoding, Enc ()) \
    MUTOPT (bool, bCaseInsensitive, false) \
    MUTOPT (bool, bCaseInverted, false) \
    MUTOPT (EmptyClassPolicy, empty_class_policy, EmptyClassPolicy::MATCH_EMPTY) \
    /* conditions */ \
    MUTOPT (std::string, yycondtype, "YYCONDTYPE") \
    MUTOPT (std::string, cond_get, "YYGETCONDITION") \
    MUTOPT (bool, cond_get_naked, false) \
    MUTOPT (std::string, cond_set, "YYSETCONDITION" ) \
    MUTOPT (std::string, cond_set_arg, RE2C_SIGIL ) \
    MUTOPT (bool, cond_set_naked, false ) \
    MUTOPT (std::string, yyctable, "yyctable") \
    MUTOPT (std::string, condPrefix, "yyc_") \
    MUTOPT (std::string, condEnumPrefix, "yyc") \
    MUTOPT (std::string, condDivider, "/* *********************************** */") \
    MUTOPT (std::string, condDividerParam, RE2C_SIGIL) \
    MUTOPT (std::string, condGoto, "goto " RE2C_SIGIL ";") \
    MUTOPT (std::string, condGotoParam, RE2C_SIGIL) \
    /* states */ \
    MUTOPT (std::string, state_get, "YYGETSTATE") \
    MUTOPT (bool, state_get_naked, false) \
    MUTOPT (std::string, state_set, "YYSETSTATE") \
    MUTOPT (std::string, state_set_arg, RE2C_SIGIL) \
    MUTOPT (bool, state_set_naked, false) \
    MUTOPT (std::string, yyfilllabel, "yyFillLabel") \
    MUTOPT (std::string, yynext, "yyNext") \
    MUTOPT (std::string, yyaccept, "yyaccept") \
    MUTOPT (bool, bUseStateAbort, false) \
    MUTOPT (bool, bUseStateNext, false) \
    /* tags */ \
    MUTOPT (bool, tags, false) \
    MUTOPT (std::string, tags_prefix, "yyt") \
    MUTOPT (std::string, tags_expression, RE2C_SIGIL) \
    MUTOPT (bool, posix_syntax, false) \
    MUTOPT (bool, posix_semantics, false) \
    MUTOPT (bool, subhistories, false) \
    MUTOPT (bool, autotags, false) \
    /* code generation */ \
    MUTOPT (bool, sFlag, false) \
    MUTOPT (bool, bFlag, false) \
    MUTOPT (std::string, yybm, "yybm") \
    MUTOPT (bool, yybmHexTable, false) \
    MUTOPT (bool, gFlag, false) \
    MUTOPT (bool, case_ranges, false) \
    MUTOPT (bool, unsafe, true) \
    MUTOPT (std::string, yyloop, "") \
    MUTOPT (std::string, yystate, "yystate") \
    MUTOPT (std::string, yytarget, "yytarget") \
    MUTOPT (uint32_t, cGotoThreshold, 9) \
    MUTOPT (uint32_t, eof, NOEOF) \
    MUTOPT (uint32_t, sentinel, NOEOF) \
    /* formatting */ \
    MUTOPT (uint32_t, topIndent, 0) \
    MUTOPT (std::string, indString, "\t") \
    /* input API */ \
    MUTOPT (Api, input_api, Api::DEFAULT) \
    MUTOPT (std::string, yycursor, "YYCURSOR") \
    MUTOPT (std::string, yymarker, "YYMARKER") \
    MUTOPT (std::string, yyctxmarker, "YYCTXMARKER") \
    MUTOPT (std::string, yylimit, "YYLIMIT") \
    MUTOPT (std::string, yypeek, "YYPEEK") \
    MUTOPT (std::string, yyskip, "YYSKIP") \
    MUTOPT (std::string, yybackup, "YYBACKUP") \
    MUTOPT (std::string, yybackupctx, "YYBACKUPCTX") \
    MUTOPT (std::string, yyrestore, "YYRESTORE") \
    MUTOPT (std::string, yyrestorectx, "YYRESTORECTX") \
    MUTOPT (std::string, yyrestoretag, "YYRESTORETAG") \
    MUTOPT (std::string, yylessthan, "YYLESSTHAN") \
    MUTOPT (std::string, yystagn, "YYSTAGN") \
    MUTOPT (std::string, yystagp, "YYSTAGP") \
    MUTOPT (std::string, yymtagn, "YYMTAGN") \
    MUTOPT (std::string, yymtagp, "YYMTAGP") \
    MUTOPT (std::string, yyshift, "YYSHIFT") \
    MUTOPT (std::string, yyshiftstag, "YYSHIFTSTAG") \
    MUTOPT (std::string, yyshiftmtag, "YYSHIFTMTAG") \
    MUTOPT (ApiStyle, api_style, ApiStyle::FUNCTIONS) \
    MUTOPT (std::string, api_sigil, RE2C_SIGIL) \
    /* debug */ \
    MUTOPT (bool, dFlag, false) \
    MUTOPT (std::string, yydebug, "YYDEBUG") \
    /* yych */ \
    MUTOPT (std::string, yyctype, "YYCTYPE") \
    MUTOPT (std::string, yych, "yych") \
    MUTOPT (bool, bEmitYYCh, true) \
    MUTOPT (bool, yychConversion, false) \
    /* YYFILL */ \
    MUTOPT (std::string, fill, "YYFILL") \
    MUTOPT (bool, fill_use, true) \
    MUTOPT (bool, fill_check, true) \
    MUTOPT (std::string, fill_arg, RE2C_SIGIL) \
    MUTOPT (bool, fill_arg_use, true) \
    MUTOPT (bool, fill_naked, false) \
    /* labels */ \
    MUTOPT (std::string, labelPrefix, "yy") \
    MUTOPT (std::string, startlabel, "") \
    MUTOPT (bool, startlabel_force, false) \
    /* end */

// Constant options.
struct conopt_t {
#define CONSTOPT1 CONSTOPT
#define CONSTOPT(type, name, value) type name;
    RE2C_CONSTOPTS
#undef CONSTOPT1
#undef CONSTOPT

    conopt_t()
#define CONSTOPT1(type, name, value) : name(value)
#define CONSTOPT(type, name, value)  , name(value)
    RE2C_CONSTOPTS
#undef CONSTOPT1
#undef CONSTOPT
    {}
    FORBID_COPY(conopt_t);
};

// Mutable options.
struct mutopt_t {
#define MUTOPT1 MUTOPT
#define MUTOPT(type, name, value) type name;
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT

    mutopt_t()
#define MUTOPT1(type, name, value) : name(value)
#define MUTOPT(type, name, value)  , name(value)
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT
    {}
    FORBID_COPY(mutopt_t);
};

// Boolean flags for mutable options.
struct mutdef_t {
#define MUTOPT1 MUTOPT
#define MUTOPT(type, name, value) bool name;
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT

    mutdef_t()
#define MUTOPT1(type, name, value) : name(true)
#define MUTOPT(type, name, value)  , name(true)
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT
    {}
};

// Union of constant and mutable options and default flags.
struct opt_t {
#define CONSTOPT1 CONSTOPT
#define CONSTOPT(type, name, value) type name;
    RE2C_CONSTOPTS
#undef CONSTOPT1
#undef CONSTOPT

#define MUTOPT1 MUTOPT
#define MUTOPT(type, name, value) type name;
    RE2C_MUTOPTS
#undef MUTOPT
#define MUTOPT(type, name, value) bool is_default_##name;
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT

    symtab_t symtab;

    opt_t(const conopt_t& con, const mutopt_t& mut, const mutdef_t& def,
          const symtab_t& symtab)
#define CONSTOPT1(type, name, value) : name(con.name)
#define CONSTOPT(type, name, value)  , name(con.name)
    RE2C_CONSTOPTS
#undef CONSTOPT1
#undef CONSTOPT

#define MUTOPT1 MUTOPT
#define MUTOPT(type, name, value) , name(mut.name)
    RE2C_MUTOPTS
#undef MUTOPT
#define MUTOPT(type, name, value) , is_default_##name(def.name)
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT
    , symtab(symtab)
    {}

    ~opt_t() {}
    opt_t(const opt_t& opt) = default;
    opt_t& operator=(const opt_t& opt) = default;
    opt_t(opt_t&& opt) = default;
    opt_t& operator=(opt_t&& opt) = default;
};

// Options management.
struct Opt {
  public:
    const conopt_t& glob;
    symtab_t symtab;
    Msg& msg;

  private:
    // Default mutable options. They depend on the global options, such as the language backend, and
    // are fixed after parsing the global options.
    const mutopt_t defaults;

    // Boolean flags indicating if a mutable option has been set by the user. These are needed to
    // distingush default values from user-set values that coincide with default ones. Constant and
    // mutable options passed on the command line may be intermixed (there is no ordering
    // requirement), so mutable options may be applied before all constant options are known and
    // default values for mutable options are determined. Such user-set mutable options should not
    // be altered by fixing default options.
    mutdef_t is_default;

    // User-set mutable options.
    mutopt_t user;

    // Real mutable options ("fixed" user-set options with various filters and implications that
    // make options consistent).
    mutopt_t real;

    // If user-set options have diverged from the real ones and need syncing.
    bool diverge;

  public:
    Opt(const conopt_t& globopts, Msg& msg);
    Ret snapshot(const opt_t*& p) NODISCARD;
    Ret fix_global_and_defaults() NODISCARD;
    Ret restore(const opt_t* opts) NODISCARD;
    Ret merge(const opt_t* opts, Scanner& lexer) NODISCARD;

#define MUTOPT1 MUTOPT
#define MUTOPT(type, name, value) \
    void set_##name(const type &arg); \
    void reset_##name();
    RE2C_MUTOPTS
#undef MUTOPT1
#undef MUTOPT
    void set_encoding(Enc::Type type, bool on);
    void set_encoding_policy(Enc::Policy p);

    void reset_group_startlabel();

  private:
    Ret sync() NODISCARD;
    FORBID_COPY(Opt);
};

Ret parse_opts(char** argv, conopt_t& globopts, Opt& opts, Msg& msg) NODISCARD;

} // namespace re2c

#endif // _RE2C_CONF_OPT_
