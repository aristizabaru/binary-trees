#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_rigth = 0;

	if (tree == NULL)
		return (0);
	else
	{
		/* height of each subtree */
		height_left = binary_tree_height(tree->left);
		height_rigth = binary_tree_height(tree->right);

		/* only add if it is not a leaf */
		if (tree->left || tree->right)
		{
			/* calculate routes */
			if (height_left > height_rigth)
				return (height_left + 1);
			return (height_rigth + 1);
		}
		return (0);
	}
}
