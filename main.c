#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "binarysearchtree.h"

Tree* fill_tree_random(Tree* tree);

int main()
{
	Tree* tree = tree_create();
	//fill_tree_random(tree);
	tree_insert_key(tree, 3);	
	tree_insert_key(tree, 2);
	tree_insert_key(tree, 1);
	tree_insert_key(tree, 9);
	tree_insert_key(tree, 7);

	//print_tree(tree->root);
	
	tree_delete(tree);	

	return 0;
}

Tree* fill_tree_random(Tree* tree)
{
	// Seed every call
	srand(time(NULL));	

	// add 1 - 25 numbers to the tree ? idk how rand works actually
	int numbers = rand() % 25 + 1;
	for (int i = 0; i < numbers; i++)
	{
		int value = rand() % 100;
		tree_insert_key(tree, value);	
	}
	return tree; 
}
