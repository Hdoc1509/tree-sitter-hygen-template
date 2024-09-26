# tree-sitter-hygen-template

Tree-sitter grammar for Hygen templates.

## References

- [Hygen repository](https://github.com/jondot/hygen)
- [Hygen website](https://www.hygen.io/)

## Roadmap

### Development

<!-- TODO: read -->
<!-- - https://tree-sitter.github.io/tree-sitter/creating-parsers -->
<!-- - https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef -->

<!-- TODO: implement Test-Driven Development -->
<!-- - continue with frontmatter https://www.hygen.io/docs/templates#frontmatter -->

<!-- NOTE: shoud I install eslint-config-treesitter? -->

- [ ] add CI workflow (grammar tests)

### Grammar

<!-- TODO: see extending example https://gitlab.com/WhyNotHugo/tree-sitter-jsonc/-/blob/main/grammar.js?ref_type=heads -->

- [ ] extend [embedded template grammar](https://github.com/tree-sitter/tree-sitter-embedded-template)
- [x] frontmatter pair of property and value
- [ ] only highlight [valid frontmatter properties for `Hygen`](https://www.hygen.io/docs/templates/#all-frontmatter-properties)
- [ ] inject `javascript` parser in `code` nodes _(`code` node comes from `embedded-template`)_
- [ ] rest of template that is not `frontmatter` will be `body` node

### Queries

- [ ] frontmatter property key as `@property`
- [ ] frontmatter property value as `@string`
  - [ ] `code` node can be present in frontmatter property value
