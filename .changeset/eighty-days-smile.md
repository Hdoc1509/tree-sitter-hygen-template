---
"tree-sitter-hygen-template": patch
---

Remove `inject-hygen-tmpl` directive

It can lead to runtime error if this directive is not defined by the consumer.
