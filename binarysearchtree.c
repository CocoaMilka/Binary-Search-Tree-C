#include <stdio.h>
#include <stdlib.h>
#include "binarysearchtree.h"

Tree* tree_create()
{
	Tree* tree = (Tree*)malloc(sizeof(Tree));
	tree->root = NULL;
	return tree;
}

void tree_insert_key(Tree* tree, int key)
{
	Node* node = malloc(sizeof(Node));
	node->key = key;
	node->smaller_keys = NULL;
	node->larger_keys = NULL;

	if (tree->root == NULL)
	{
		tree->root = node;
		return;
	}

	Node* current = tree->root;
	while(true)
	{
		if (key == current->key) return;

		Node** next = (key < current->key) ? &current->smaller_keys : &current->larger_keys;
		if (*next == NULL)
		{
			*next = node;
			return;
		}	
		current = *next;
	}
}

bool tree_find_key_recursive(Tree* tree, int key)
{
	return false;
}
bool tree_find_key_iterative(Tree* tree, int key)
{
	return false;
}

bool tree_is_valid(Tree* tree)
{
	return false;
}

Tree* tree_deep_copy(Tree* tree)
{
	Tree* copy = tree_create();
	
	Node* tmp = tree->root;
	Node* node = malloc(sizeof(Node));
	node->key = tmp->key;
	
	copy->root = node;

	return copy;
}

void tree_delete(Tree* tree)
{
	node_delete(tree->root);
}

void node_delete(Node* node)
{
	if (node == NULL)
		return;
	node_delete(node->smaller_keys);
	node_delete(node->larger_keys);
	free(node);
}

void print_tree(Node* node)
{
	if (node == NULL)
		return;
	printf("%d\n", node->key);
	print_tree(node->smaller_keys);
	print_tree(node->larger_keys);
}
