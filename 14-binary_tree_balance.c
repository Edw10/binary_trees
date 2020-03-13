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
 * binary_tree_balance - return the node's balance factor
 * @tree: a pointer to the node
 * Return: the height of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t r = 0, l = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	return (l - r);
}
