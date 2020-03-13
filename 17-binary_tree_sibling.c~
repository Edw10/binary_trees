#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - return the node's depth of a binary tree
 * @tree: a pointer to the node to evaluate
 * Return: the node's depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		d = 1 + binary_tree_depth(tree->parent);
	return (d);
}
