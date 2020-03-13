#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - return the node's sibling
 * @node: a pointer to the node to evaluate
 * Return: the node's depth
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node);
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->parent->left && node->parent->right)
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	return (NULL);
}
