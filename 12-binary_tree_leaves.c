#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - return the leaves of a binary tree
 * @tree: a pointer to the tree to traverse
 * Return: the number of the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = l + binary_tree_leaves(tree->left);
	if (tree->right)
		l = l + binary_tree_leaves(tree->right);
	if (!(tree->left) && !(tree->right))
		l = l + 1;
	return (l);
}
