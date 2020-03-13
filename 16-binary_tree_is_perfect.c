#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_height - return the height of a binary tree
 * @tree: a pointer to the tree to traverse
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	if (l >= r)
		return (l);
	else
		return (r);
}

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
		if(binary_tree_height(tree->left) ==
		   binary_tree_height(tree->right))
			return (binary_tree_is_perfect(tree->left) *
		       binary_tree_is_perfect(tree->right));
		else
			return (0);
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
