package tree_sitter_hygen_template_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hygen_template "github.com/tree-sitter/tree-sitter-hygen_template/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hygen_template.Language())
	if language == nil {
		t.Errorf("Error loading HygenTemplate grammar")
	}
}
