# tree-sitter-hygen-template

## 0.4.1

### Patch Changes

- Disable recursive inclution of LICENSE files in Cargo.toml ([`22ce390`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/22ce390eee85ad33af2cb21a8cab2ffae7adb522))

## 0.4.0

### Minor Changes

- Include LICENSE file for cargo project ([`82894fa`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/82894fa568656650aff429b6c8d2e01d74861902))

## 0.3.4

### Patch Changes

- Update `node` lockfile ([`7196ddb`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/7196ddb0d11f36eca183df09a5bd192d585af12f))

## 0.3.3

### Patch Changes

- Remove inheritance on `embedded_template` in `highlights` query ([`9a7b792`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/9a7b7924f64246f5cfcff9d9657fa299ce2a8371))

## 0.3.2

### Patch Changes

- Disable recursive inclusion of `grammar.js` files in Cargo.toml ([`33fd935`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/33fd93546035de8eb45ad4fd85113503b64b336c))

## 0.3.1

### Patch Changes

- Revert some changes made to node bindings ([`72e4093`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/72e409362e94a31d9ed92a4e2008b5b5eb8d98a8))

## 0.3.0

### Minor Changes

- Include `tree-sitter.json` file ([`198a3d4`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/198a3d461a91f040316abbbbc422bd690e118d5e))

### Patch Changes

- Set correct package name in `peerDependenciesMeta` ([`06fd17f`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/06fd17f5b996900fb5048887d20a870dab37d06d))

## 0.2.3

### Patch Changes

- Remove `inject-hygen-tmpl` directive ([`43e21ba`](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/43e21ba950265be9c1f085de54c22d4100791328))

  It can lead to runtime error if this directive is not defined by the consumer.

## 0.2.2

### Patch Changes

- [1200273](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/1200273ec9c6dcbed0987ce2bff49dcae09479fa): Update keywords

## 0.2.1

### Patch Changes

- [847b1a6](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/847b1a620c426547047a5dda8f55b78fbb832188): Bring back generated parser files

## 0.2.0

### Minor Changes

- [542fca5](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/542fca56dd2554b53662f9501bf3d202dd0a83ca): Update `tree-sitter-cli` to `v0.24.1`

## 0.1.1

### Patch Changes

- [ebc2643](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/ebc264354a93311ca59c857d70ba1e39eb10218b): Update publish related files

## 0.1.0

### Initial release

- [edcadb9](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/edcadb9383d4895871648808b358963c498f401f): Add basic grammar for frontmatter
- [e0c8145](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/e0c8145b3e9c8d560940b8ce6694673ba3f87629): Add basic grammar for metadata pairs
- [94d0819](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/94d0819b47b0ea3a538225381ed94809b3380209): Add grammar for simple `body` node
- [f8353a1](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/f8353a148adc02747c19eb548563e69029ce269f): Add grammar to allow variables in frontmatter

  Used nodes from `embedded_template`:

  - `directive`
  - `output_directive`

- [81dfc43](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/81dfc438d4bf8e43551b6ca7b0d1d0645b56b2e7): Allow to have only `body` node in template
- [0dd073c](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/0dd073cd72431305fcf3a18108895360c575a3f8): Extend `embedded template` grammar
- [02e4af7](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/02e4af770e7694fa0a11b225cd9b640b0399d7b5): Add `body` node to template grammar
- [86f236d](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/86f236d069f015380d1bda55c0ef514add07851b): Add basic grammar for frontmatter metadata
- [0601af9](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/0601af9aa90170cceafc1d4c3f624e1eb85e0015): Add grammar to allow `ejs` directives in `body` node
- [bce2f46](https://github.com/Hdoc1509/tree-sitter-hygen-template/commit/bce2f463fac2089500d0f9df37a8c56b74e22a2d): Only highlight valid frontmatter properties for `Hygen`
