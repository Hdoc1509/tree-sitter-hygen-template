/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// NOTE: AVOID USAGE OF `*` (wildcard) INSIDE `repeat()` or `repeat1()` functions.
// IT CAN LEAD TO INFINITE LOOPS!!!

module.exports = grammar({
  name: "hygen_template",

  rules: {
    template: ($) => seq($.frontmatter),

    frontmatter: () => seq(token(prec(1, "---")), /\w+:\s.+/, "---"),

    body: ($) => repeat1($.content),

    content: () => /.+/,
  },
});
