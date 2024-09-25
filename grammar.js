/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "hygen_template",

  rules: {
    template: (_) => repeat(/\w/),
  },
});
