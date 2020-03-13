#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - return the balance factpr of a node
 * @tree: a pointer to the node
 * Return: the number of the nodes with at least 1 child
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t b = 0;

	if (!tree)
		return (0);
	if (tree->left)
		b = 1;
	if (tree->right)
		b = b + 1;
	if (b == 1)
		b = -b;
	return (b);
}
