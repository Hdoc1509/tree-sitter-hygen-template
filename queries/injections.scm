((code) @injection.content
  (#set! injection.language "javascript")
  (#set! injection.combined))

((content) @injection.content
  (#inject-hygen-tmpl!)
  (#set! injection.combined))
