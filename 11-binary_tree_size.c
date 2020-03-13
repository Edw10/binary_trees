#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_size - return the size of a binary tree
 * @tree: a pointer to the tree to traverse
 * Return: the size of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t s = 1;

	if (!tree)
		return (0);
	if (tree->left)
		s = s + binary_tree_size(tree->left);
	if (tree->right)
		s = s + binary_tree_size(tree->right);
	return (s);
}
