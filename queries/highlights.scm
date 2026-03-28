; follow STANDARD_CAPTURE_NAMES:
; https://github.com/tree-sitter/tree-sitter/blob/master/crates/highlight/src/highlight.rs
((key) @property
  (#any-of? @property
    "to" "from" "force" "unless_exists" "inject" "after" "skip_if" "sh" "before" "prepend" "append"
    "at_line"))

(string_value) @string

[
  "---"
  ":"
] @punctuation.delimiter

(comment_directive) @comment

[
  "<%#"
  "<%"
  "<%="
  "<%_"
  "<%-"
  "%>"
  "-%>"
  "_%>"
] @keyword

[
  (true)
  (false)
] @boolean

(number) @number
