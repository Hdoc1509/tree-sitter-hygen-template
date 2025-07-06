/**
 * @file Hygen template grammar for tree-sitter-cli
 * @author Héctor Ochoa <hector.ochoa.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// NOTE: AVOID USAGE OF `*` (wildcard) INSIDE `repeat()` or `repeat1()` functions.
// IT CAN LEAD TO INFINITE LOOPS!!!

const embedded_template = require("tree-sitter-embedded-template/grammar");

module.exports = grammar(embedded_template, {
  name: "hygen_template",

  rules: {
    template: ($) => choice(seq($.frontmatter, optional($.body)), $.body),

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
    value: ($) =>
      seq(
        repeat1(
          choice(
            $.directive,
            $.output_directive,
            $.string_value,
            $.true,
            $.false,
          ),
        ),
      ),
    true: () => /\s*?true/,
    false: () => /\s*?false/,
    string_value: () => /[^<\n]+/,

    body: ($) =>
      repeat1(
        // same as `template` rule of `embedded_template` but without
        // $.graphql_directive node
        choice($.directive, $.output_directive, $.comment_directive, $.content),
      ),
  },
});
