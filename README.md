# tree-sitter-hygen-template

[![CI][ci]](https://github.com/Hdoc1509/tree-sitter-hygen-template/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![crates][crates]](https://crates.io/crates/tree-sitter-hygen-template)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-hygen-template)
[![pypi][pypi]](https://pypi.org/project/tree-sitter-hygen-template)

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for
[Hygen](https://github.com/jondot/hygen) templates.

It extends the [`tree-sitter-embedded-template`][embedded-template] grammar.

## Parser requirements

- [`bash`](https://github.com/tree-sitter/tree-sitter-bash) (optional):
  highlight of `metadata.value` when `metadata.key` is `sh`
- [`javascript`](https://github.com/tree-sitter/tree-sitter-javascript)
  (optional): highlight of `code` nodes
- [`regex`](https://github.com/tree-sitter/tree-sitter-regex) (optional):
  highlight of `metadata.value` when `metadata.key` is `after`, `before` or
  `skip_if`
- Any other parser that you want to use for [dynamic injection](#dynamic-injection)

## Usage in Editors

### Neovim

- [`hygen.nvim`](https://github.com/Hdoc1509/hygen.nvim): plugin that integrates
  this grammar to your `Neovim` configuration.

### Helix

_To be added_

<!--
TODO: add script to add this grammar to Helix configuration. see:
- https://docs.helix-editor.com/guides/adding_languages.html
- https://docs.helix-editor.com/languages.html
take reference from:
https://github.com/IndianBoy42/tree-sitter-just?tab=readme-ov-file#manual-installation-helix
-->

### Emacs

_To be added_

<!--
TODO: take reference from:
https://github.com/tree-sitter-perl/tree-sitter-perl?tab=readme-ov-file#emacs
-->

### In General

You can get the built files from the [`release` branch][release-branch]. If you
have specific instructions for your editor, PR's are welcome.

## Dynamic Injection

Thanks to `content` node of [`tree-sitter-embedded-template`
grammar][embedded-template-grammar], dynamic injections can be attached to
template body.

### File naming convention

Just add `.hygen` to the end of the file name, i.e.:

- `index.html.hygen`
- `.gitignore.hygen`
- `.tsconfig.json.hygen`

### Tree-sitter directive

To implement dynamic injection, is recommended to create a directive with the
following name:

```txt
#inject-hygen-tmpl!
```

> [!NOTE]
> The creation of this directive varies for each editor

This directive will the responsible to remove `.hygen` from the file name and
use the rest of the file name to retrieve the `parser` to be used for dynamic
injection. See [implementations](#implementations) for more details.

> [!WARNING]
> Ignore dynamic injection for `*.ejs.hygen`, `*.erb.hygen` and `*.hygen.hygen`
> files to avoid weird behaviours

Once created, add it to the end of `injections.scm` file that will be used by
the editor:

```query
; dynamic injection
((content) @injection.content
  (#inject-hygen-tmpl! "")
  (#set! injection.combined))
```

## Implementations

### hygen.nvim

- [Filetype detection][hygen-nvim-filetype]
- [Parser register and injection directive][hygen-nvim-tree-sitter]
- [Dynamic injection query][hygen-nvim-injection-queries]

## References

- [Hygen repository](https://github.com/jondot/hygen)
- [Hygen website](https://www.hygen.io/) (_currently down_)

[ci]: https://github.com/Hdoc1509/tree-sitter-hygen-template/actions/workflows/ci.yml/badge.svg
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[crates]: https://img.shields.io/crates/v/tree-sitter-hygen-template?logo=rust
[npm]: https://img.shields.io/npm/v/tree-sitter-hygen-template?logo=npm
[pypi]: https://img.shields.io/pypi/v/tree-sitter-hygen-template?logo=pypi&logoColor=ffd242
[embedded-template]: https://github.com/tree-sitter/tree-sitter-embedded-template
[embedded-template-grammar]: https://github.com/tree-sitter/tree-sitter-embedded-template/blob/master/grammar.js
[hygen-nvim-filetype]: https://github.com/Hdoc1509/hygen.nvim/blob/master/ftdetect/hygen.vim
[hygen-nvim-injection-queries]: https://github.com/Hdoc1509/hygen.nvim/blob/master/queries/hygen_template/injections.scm
[hygen-nvim-tree-sitter]: https://github.com/Hdoc1509/hygen.nvim/blob/master/lua/hygen/tree-sitter.lua
[release-branch]: https://github.com/Hdoc1509/tree-sitter-hygen-template/tree/release
