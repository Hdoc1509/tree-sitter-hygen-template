package tree_sitter_hygen_template_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hygen_template "github.com/hdoc1509/tree-sitter-hygen-template/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hygen_template.Language())
	if language == nil {
		t.Errorf("Error loading HygenTemplate grammar")
	}
}
