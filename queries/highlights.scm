; follow STANDARD_CAPTURE_NAMES:
; https://github.com/tree-sitter/tree-sitter/blob/master/crates/highlight/src/highlight.rs
((key) @property
  (#any-of? @property
    "to" "from" "force" "unless_exists" "inject" "after" "skip_if" "sh" "before" "prepend" "append"
    "at_line"))

; TODO: only highlight valid tags of `ejs`
; reference: https://github.com/mde/ejs#tags
; NOTE: add highlight for tags of `directive` if needed
(value
  (output_directive
    [
      "<%="
      "<%=="
      "<%|="
      "<%|=="
      "<%-"
      "%>"
      "-%>"
      "=%>"
    ] @keyword))

(string_value) @string

[
  "---"
  ":"
] @punctuation.delimiter

(comment_directive) @comment

[
  (true)
  (false)
] @boolean

(number) @number

(template
  (frontmatter) @_frontmatter
  (#match? @_frontmatter "from:")
  (body) @comment)

(template
  .
  (body
    [
      (directive
        [
          "<%"
          "<%_"
          "<%|"
          "<%-"
          "%>"
          "-%>"
          "_%>"
        ] @keyword)
      (output_directive
        [
          "<%="
          "<%=="
          "<%|="
          "<%|=="
          "<%-"
          "%>"
          "-%>"
          "=%>"
        ] @keyword)
      (comment_directive
        [
          "<%#"
          "%>"
        ] @keyword)
    ]))

(template
  (frontmatter) @frontmatter
  (#not-match? @frontmatter "from:")
  (body
    [
      (directive
        [
          "<%"
          "<%_"
          "<%|"
          "<%-"
          "%>"
          "-%>"
          "_%>"
        ] @keyword)
      (output_directive
        [
          "<%="
          "<%=="
          "<%|="
          "<%|=="
          "<%-"
          "%>"
          "-%>"
          "=%>"
        ] @keyword)
      (comment_directive
        [
          "<%#"
          "%>"
        ] @keyword)
    ]))
