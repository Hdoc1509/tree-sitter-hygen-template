# tree-sitter-hygen-template

[![CI][ci]](https://github.com/Hdoc1509/tree-sitter-hygen-template/actions/workflows/ci.yml)
[![crates][crates]](https://crates.io/crates/tree-sitter-hygen-template)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-hygen-template)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-hygen-template)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for
[Hygen](https://www.hygen.io/) templates.

## Usage in Editors

### Neovim

#### Required parsers

- [`embedded-template`](https://github.com/tree-sitter/tree-sitter-embedded-template):
  highlight of [`ejs` tags](https://github.com/mde/ejs?tab=readme-ov-file#tags)

#### Optional parsers

- [`bash`](https://github.com/tree-sitter/tree-sitter-bash):
  highlight of `metadata.value` when `metadata.key` is `sh`
- [`javascript`](https://github.com/tree-sitter/tree-sitter-javascript):
  highlight of `code` nodes

#### Installation

1. Add the following to your `init.lua` or respective config file:

   ```lua
   local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

   -- NOTE: add the parser to `parser_config` before calling `setup()`
   parser_config.hygen_template = {
     install_info = {
       url = "https://github.com/Hdoc1509/tree-sitter-hygen-template",
       files = { "src/parser.c" },
       generate_requires_npm = true,
       revision = 'release',
     },
     filetype = "hygen",
   }

   require('nvim-treesitter.configs').setup({
     ensure_installed = {
       --- other parsers
       'hygen_template',
     },
     -- other options
   })
   ```

2. Copy the queries from [`queries`](./neovim/queries/) directory to
   `queries/hygen_template` directory in your `neovim` configuration directory:

   | With                  | Path                    |
   | --------------------- | ----------------------- |
   | Unix                  | `~/.config/nvim`        |
   | Windows               | `~/AppData/Local/nvim`  |
   | `XDG_CONFIG_HOME` set | `$XDG_CONFIG_HOME/nvim` |

3. Copy the [`filetype.vim`](./neovim/ftdetect.vim) file to your `neovim`
   configuration directory `ftdetect` subdirectory as `hygen.vim`.

   > [!NOTE]
   > `hygen` filetype will match all files with `name.ext.hygen` pattern, where
   > `ext` will be used to extract the parser to be injected.

4. Copy the [`directive.lua`](./neovim/hygen-directive.lua) file to your `neovim`
   configuration directory and add the following to your `init.lua` or
   respective config file:

   ```lua
   local hygen_directive = require('path-to.hygen-directive')

   local directives = { hygen_directive }

   for _, directive in ipairs(directives) do
     vim.treesitter.query.add_directive(
       directive.name,
       directive.callback,
       directive.options
     )
   end
   ```

## References

- [Hygen repository](https://github.com/jondot/hygen)
- [Hygen website](https://www.hygen.io/)

[ci]: https://github.com/Hdoc1509/tree-sitter-hygen-template/actions/workflows/ci.yml/badge.svg
[crates]: https://img.shields.io/crates/v/tree-sitter-hygen-template?logo=rust
[npm]: https://img.shields.io/npm/v/tree-sitter-hygen-template?logo=npm
[pypi]: https://img.shields.io/pypi/v/tree-sitter-hygen-template?logo=pypi&logoColor=ffd242
