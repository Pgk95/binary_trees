#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a tree.
 * @tree: pointer to the node to meausre the depth
 *
 * Return: depth of the node,or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
<<<<<<< HEAD

=======
	
>>>>>>> 9e6b1bef1b1798833e3fc1cb916cd4f1a208f34a
	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
