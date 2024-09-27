package tree_sitter_st_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_st "github.com/tree-sitter/tree-sitter-st/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_st.Language())
	if language == nil {
		t.Errorf("Error loading St grammar")
	}
}
