# tree-sitter-hygen-template

[![CI][ci]](https://github.com/Hdoc1509/tree-sitter-hygen-template/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![crates][crates]](https://crates.io/crates/tree-sitter-hygen-template)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-hygen-template)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-hygen-template)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for
[Hygen](https://www.hygen.io/) templates.

It extends the [`tree-sitter-embedded-template`][embedded-template] grammar.

## Usage in Editors

### Neovim

- [`hygen.nvim`](https://github.com/Hdoc1509/hygen.nvim): plugin that integrates
  this grammar to your `Neovim` configuration.

## Dynamic Injections

Thanks to [`content`][embedded-template-content-node] node of
[`tree-sitter-embedded-template`][embedded-template] grammar, dynamic Injections
can be attached to template body.

### File name pattern convention

To make it easier to understand which `parser` will be injected and which
filetype is used in template `body`, the following pattern is recommended to
implement this grammar:

```
<file-name>.(ext).hygen
```
### Tree-sitter predicate/directive

To implement dynamic injection, is recommended to create a predicate/directive
with the following name:

```
#inject-hygen-tmpl!
```

> [!NOTE]
> The creation of this predicate/directive varies for each editor

### Implementations

#### hygen.nvim

- [Filetype detection][hygen-nvim-filetype]
- [Parser register][hygen-nvim-parser-register]
- [Dynamic injection query][hygen-nvim-injection-query]
- [Dynamic injection directive][hygen-nvim-injection-directive]

## References

- [Hygen repository](https://github.com/jondot/hygen)
- [Hygen website](https://www.hygen.io/)

[ci]: https://github.com/Hdoc1509/tree-sitter-hygen-template/actions/workflows/ci.yml/badge.svg
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[crates]: https://img.shields.io/crates/v/tree-sitter-hygen-template?logo=rust
[npm]: https://img.shields.io/npm/v/tree-sitter-hygen-template?logo=npm
[pypi]: https://img.shields.io/pypi/v/tree-sitter-hygen-template?logo=pypi&logoColor=ffd242
[embedded-template]: https://github.com/tree-sitter/tree-sitter-embedded-template
[embedded-template-content-node]: https://github.com/tree-sitter/tree-sitter-embedded-template/blob/62b0a6e45900a7dff7c37da95fec20a09968ba52/grammar.js#L26
[hygen-nvim-filetype]: https://github.com/Hdoc1509/hygen.nvim/blob/9d6591f4f7955e28d10a64c8fd2f78294d267585/ftdetect/hygen.vim
[hygen-nvim-parser-register]: https://github.com/Hdoc1509/hygen.nvim/blob/9d6591f4f7955e28d10a64c8fd2f78294d267585/lua/hygen/tree-sitter.lua#L19-L29
[hygen-nvim-injection-query]: https://github.com/Hdoc1509/hygen.nvim/blob/9d6591f4f7955e28d10a64c8fd2f78294d267585/queries/hygen_template/injections.scm#L13-L15
[hygen-nvim-injection-directive]: https://github.com/Hdoc1509/hygen.nvim/blob/9d6591f4f7955e28d10a64c8fd2f78294d267585/lua/hygen/tree-sitter.lua#L32-L47
