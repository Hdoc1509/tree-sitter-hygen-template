/**
 * @file Hygen template grammar for tree-sitter-cli
 * @author Héctor Ochoa <hector.ochoa.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "hygen_template",

  extras: ($) => [$._blank],

  rules: {
    template: ($) => choice(seq($.frontmatter, optional($.body)), $.body),

    frontmatter: ($) =>
      seq(
        token(prec(1, "---")),
        repeat(choice($.metadata, $.frontmatter_comment)),
        "---",
      ),

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
    true: () => /\s*true/,
    false: () => /\s*false/,
    number: () => /\s*\d+/,
    string_value: () => /[^<\n#]+/,

    directive: ($) =>
      seq(choice("<%", "<%_"), optional($.code), choice("%>", "-%>", "_%>")),
    output_directive: ($) =>
      seq(choice("<%=", "<%-"), optional($.code), choice("%>", "-%>")),
    comment_directive: ($) =>
      seq("<%#", optional(alias($.code, $.comment)), "%>"),

    code: () => repeat1(choice(/[^%=_-]+|[%=_-]/, "%%>")),

    body: ($) =>
      repeat1(
        choice($.directive, $.output_directive, $.comment_directive, $.content),
      ),

    content: () => prec.right(repeat1(choice(/[^<]+|</, "<%%"))),

    frontmatter_comment: () => /#[^\r\n]*/,
    _blank: () => /\s+/,
  },
});
