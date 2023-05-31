#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Craetes a binary tree node
 * @parent: Pointer to the to the node (parent) of the node to create.
 * @value: value to put in the newly created node
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}