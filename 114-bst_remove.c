#include "binary_trees.h"
#include <stdlib.h>

/**
 * bst_remove - Removes a node from a Binary Search Tree (BST).
 * @root: A pointer to the root node of the tree.
 * @value: The value to remove from the tree.
 *
 * Return: A pointer to the new root node of the tree after removing the value,
 *         or NULL if the tree is empty or the value was not found.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
	if (root->left == NULL) {
		bst_t *temp = root->right;
		free(root);
		return (temp);
	} else if (root->right == NULL) 
	{
		bst_t *temp = root->left;
		free(root);
		return (temp);
	} else 
	{
		bst_t *successor = bst_find_min(root->right);
		root->n = successor->n;
		root->right = bst_remove(root->right, successor->n);
	}
	}

	return (root);
}
