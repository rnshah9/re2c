#include "src/msg/msg.h"
#include "src/parse/input.h"
#include "src/parse/scanner.h"
#include "src/util/file_utils.h"
#include "src/util/string_utils.h"

namespace re2c {

Input::Input(size_t fidx)
    : file(nullptr),
      name(),
      path(),
      escaped_name(),
      so(Scanner::ENDPOS),
      eo(Scanner::ENDPOS),
      line(1),
      fidx(static_cast<uint32_t>(fidx)) {}

Ret Input::open(const std::string& filename,
                const std::string* parent,
                const std::vector<std::string>& incpaths) {
    name = filename;

    if (!parent) {
        path = name;
        file = name == "<stdin>" ? stdin : fopen(name.c_str(), "rb");
    } else {
        // first, search relative to the directory of including file
        path = *parent;
        get_dir(path);
        path += name;
        file = fopen(path.c_str(), "rb");

        // otherwise search in all include paths
        for (const std::string& incpath : incpaths) {
            if (file != nullptr) break;
            path = incpath + name;
            file = fopen(path.c_str(), "rb");
        }

        // if user-defined include paths failed, try stdlib path
        if (!file) {
            path = RE2C_STDLIB_DIR + name;
            file = fopen(path.c_str(), "rb");
        }
    }

    if (!file) RET_FAIL(error("cannot open file: %s", name.c_str()));

    // name displayed in #line directives is the resolved name
    escaped_name = escape_backslashes(path);

    return Ret::OK;
}

Input::~Input() {
    if (file != nullptr && file != stdin) {
        fclose(file);
    }
}

} // namespace re2c
