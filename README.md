# tree-sitter-hygen-template

Tree-sitter grammar for Hygen templates.

## Specification

### Template structure

Hygen templates has two main parts:

```
---
{frontmatter}
---
{body}
```

### Template with `ejs` tags

Also, Hygen templates can have `ejs` tags in `frontmatter` and `body`.

```ejs
---
to: apps/<%= name %>/src/index.ts
---

import { <%= name %> } from './app-generator';

const app = new <%= name %>();

app.run();
```

### Template without `frontmatter`

With the following template, located at `${templates}/shared-hello.txt`:

```ejs
Hello, <%= name %>!
```

This allows to have shareable templates for different [`generators`](https://www.hygen.io/docs/generators/)
that can be used like the following:

```ejs
---
to: target-path/hello.txt
---

<%- include(`${templates}/shared-hello.txt`) %>
```

> [!NOTE]
> You can read more about `${templates}` variable in [`Predefined Variables section`](https://www.hygen.io/docs/templates#predefined-variables)

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
       revision = '<latest-release-commit-hash>'
       -- commit-hash can be short or long form
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

2. Run `:TSInstall hygen_template` to install the parser.

3. Copy the queries from [`queries`](./neovim/queries/) directory to
   `queries/hygen_template` directory in your `neovim` configuration directory:

   | With                  | Path                    |
   | --------------------- | ----------------------- |
   | Unix                  | `~/.config/nvim`        |
   | Windows               | `~/AppData/Local/nvim`  |
   | `XDG_CONFIG_HOME` set | `$XDG_CONFIG_HOME/nvim` |

4. Copy the [`filetype.vim`](./neovim/ftdetect.vim) file to your `neovim`
   configuration directory `ftdetect` subdirectory as `hygen.vim`.

   > [!NOTE]
   > `hygen` filetype will match all files with `name.ext.hygen` pattern, where
   > `ext` will be used to extract the parser to be injected.

5. Copy the [`directive.lua`](./neovim/hygen-directive.lua) file to your `neovim`
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

## Roadmap

### Documentation

- [ ] add screenshots of syntax highlighting:
  - [ ] only `frontmatter`
  - [ ] only `body`
  - [ ] with `frontmatter` and `body`

### Development

<!-- TODO: read -->
<!-- - https://tree-sitter.github.io/tree-sitter/creating-parsers -->
<!-- - https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef -->

<!-- TODO: implement Test-Driven Development -->
<!-- - continue with frontmatter https://www.hygen.io/docs/templates#frontmatter -->

<!-- NOTE: shoud I install eslint-config-treesitter? -->

- [ ] add CI workflow (grammar tests)
  <!-- NOTE: see: -->
  <!-- - https://github.com/tree-sitter-grammars/template/blob/master/.github/workflows/publish.yml -->
  <!-- - https://github.com/alex-pinkus/tree-sitter-swift/issues/149 -->
  <!-- - https://github.com/DerekStride/tree-sitter-sql/pull/100 -->
  <!-- - https://github.com/tree-sitter-perl/tree-sitter-perl/blob/master/.github/workflows/release.yml -->
  <!--   https://github.com/tree-sitter-perl/tree-sitter-perl/blob/master/copy-to-release -->

### Testing

- [x] template can be only `frontmatter`

### Grammar

- [x] extend [embedded template grammar](https://github.com/tree-sitter/tree-sitter-embedded-template)
- [x] frontmatter pair of property and value
- [x] rest of template that is not `frontmatter` will be `body` node
- [x] `code` node can be present in frontmatter property value

### Queries

#### Highlights

- [x] only highlight [valid frontmatter properties for `Hygen`](https://www.hygen.io/docs/templates/#all-frontmatter-properties)
- [x] metadata property key as `@property`
- [x] metadata property value as `@string`

#### Injections

- [x] inject `javascript` parser in `code` nodes _(`code` node comes from `embedded-template`)_
- [x] dynamic injection in `body.content` node by using file extension, e.g.:

  - `file.js.hygen` will be highlighted with `javascript` parser
  - `file.astro.hygen` will be highlighted with `astro` parser
  - `file.md.hygen` will be highlighted with `markdown` parser

  _Target parser wil be extracted from `file-name.(ext).hygen`_
