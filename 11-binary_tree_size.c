#include "binary_trees.h"

/**
 * binary_tree_size - measures the size ofa binary tree.
 * @tree: pointer to the root node to measure the size.
 *
 * Return: size of the tree, otherwise 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t size = 1;
	
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
