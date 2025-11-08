#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <stdbool.h>

typedef struct NODE Node;

struct NODE
{
	int key;
	Node* smaller_keys;
	Node* larger_keys;
};

typedef struct TREE
{
	Node* root;
} Tree;

Tree* tree_create();

void tree_insert_key(Tree* tree, int key);

bool tree_find_key_recursive(Tree* tree, int key);
bool tree_find_key_iterative(Tree* tree, int key);

bool tree_is_valid(Tree* tree);

Tree* tree_deep_copy(Tree* tree);

void tree_delete(Tree* tree);

void print_tree(Node* node);

#endif
