#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to the right
 * @parent: a pointer to the parent of the node
 * @value: the value of the node to create
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	else
		node->right = NULL;
	parent->right = node;
	node->left = NULL;
	return (node);
}
