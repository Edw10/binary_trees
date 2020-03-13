#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - return the nodes of a binary tree
 * @tree: a pointer to the tree to traverse
 * Return: the number of the nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0, a = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		a = 1;
		l = 1 + binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		if (a == 1)
			l = l + binary_tree_nodes(tree->right);
		else
			l = 1 + binary_tree_nodes(tree->right);
	}
	return (l);
}
