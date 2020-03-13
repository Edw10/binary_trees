#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree
 * @tree: a pointer to the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	else if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
