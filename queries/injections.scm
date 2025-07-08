(frontmatter
  (metadata
    ((key) @key
      (#eq? @key "sh"))
    (value
      ((string_value) @injection.content
        (#set! injection.language "bash")))))

(frontmatter
  (metadata
    ((key) @key
      (#any-of? @key "after" "before" "skip_if"))
    (value
      ((string_value) @injection.content
        (#set! injection.language "regex")))))

((code) @injection.content
  (#set! injection.language "javascript")
  (#set! injection.combined))
