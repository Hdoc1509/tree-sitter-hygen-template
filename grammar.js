/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// NOTE: AVOID USAGE OF `*` (wildcard) INSIDE `repeat()` or `repeat1()` functions.
// IT CAN LEAD TO INFINITE LOOPS!!!

const embedded_template = require("tree-sitter-embedded-template/grammar");

module.exports = grammar(embedded_template, {
  name: "hygen_template",

  rules: {
    template: ($) => seq($.frontmatter, optional($.body)),

    frontmatter: ($) =>
      seq(
        token(prec(1, "---")),
        /\n/,
        repeat1($.metadata),
        "---",
        optional(/\n/),
      ),

    metadata: ($) =>
      seq(field("key", $.key), ":", field("value", $.value), /\n/),
    key: () => /\w+/,
    value: () => /.+/,

    body: ($) => repeat1($.content),

    content: () => /.+/,
  },
});
