#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count nodes.
 *
 * @count: number of nodes with atleast 1 child in the binary tree.
 *
 * Return: number of nodes with at least 1 child otherwise 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t count = 0;

	if (tree->left != NULL || tree->right != NULL)
{
		count++;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
}

	return (count);
}
