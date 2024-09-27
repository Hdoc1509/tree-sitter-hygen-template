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
  <!-- NOTE: see: -->
  <!-- - https://github.com/tree-sitter-grammars/template/blob/master/.github/workflows/publish.yml -->
  <!-- - https://github.com/alex-pinkus/tree-sitter-swift/issues/149 -->
  <!-- - https://github.com/DerekStride/tree-sitter-sql/pull/100 -->
  <!-- - https://github.com/tree-sitter-perl/tree-sitter-perl/blob/master/.github/workflows/release.yml -->
  <!--   https://github.com/tree-sitter-perl/tree-sitter-perl/blob/master/copy-to-release -->

### Testing

- [ ] template can be only `frontmatter`

### Grammar

- [x] extend [embedded template grammar](https://github.com/tree-sitter/tree-sitter-embedded-template)
- [x] frontmatter pair of property and value
- [x] rest of template that is not `frontmatter` will be `body` node
- [x] `code` node can be present in frontmatter property value

### Queries

#### Highlights

- [ ] only highlight [valid frontmatter properties for `Hygen`](https://www.hygen.io/docs/templates/#all-frontmatter-properties)
- [x] metadata property key as `@property`
- [x] metadata property value as `@string`

#### Injections

- [ ] inject `javascript` parser in `code` nodes _(`code` node comes from `embedded-template`)_
