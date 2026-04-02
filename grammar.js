/**
 * @file Hygen template grammar for tree-sitter-cli
 * @author Héctor Ochoa <hector.ochoa.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const embedded_template = require("tree-sitter-embedded-template/grammar");

module.exports = grammar(embedded_template, {
  name: "hygen_template",

  // TODO: use `comment_directive` here
  extras: ($) => [$.frontmatter_comment, $._blank],

  rules: {
    template: ($) => choice(seq($.frontmatter, optional($.body)), $.body),

    frontmatter: ($) =>
      seq(token(prec(1, "---")), /\n/, repeat($.metadata), "---"),

    metadata: ($) =>
      seq(field("key", $.key), ":", field("value", $.value), /\n/),
    key: () => /\w+/,
    value: ($) =>
      seq(
        repeat1(
          choice(
            // TODO: check if `directive` can be removed from here
            $.directive,
            $.output_directive,
            $.string_value,
            $.true,
            $.false,
            $.number,
          ),
        ),
      ),
    true: () => /\s*?true/,
    false: () => /\s*?false/,
    number: () => /\s*?\d+/,
    string_value: () => /[^<\n#]+/,

    body: ($) =>
      repeat1(
        // same as `template` rule of `embedded_template` but without
        // $.graphql_directive node
        choice($.directive, $.output_directive, $.comment_directive, $.content),
      ),

    frontmatter_comment: () => /#[^\r\n]*/,
    _blank: () => /\s+/,
  },
});
