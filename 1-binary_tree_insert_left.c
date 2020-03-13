#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left
 * @parent: a pointer to the parent of the node
 * @value: the value of the node to create
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	if (parent->left)
		node->left = parent->left;
	else
		node->left = NULL;
	node->right = NULL;
	parent->left = node;
	return (node);
}
