#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - return the nodes of a binary tree
 * @tree: a pointer to the tree to traverse
 * Return: the number of the nodes with at least 1 child
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		return (binary_tree_is_perfect(tree->left) *
		       binary_tree_is_perfect(tree->right));
	}
	else if (tree->left)
	{
		return (0);
	}
	else if (tree->right)
	{
		return (0);
	}
	return (1);
}
