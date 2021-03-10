#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @tree: node
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = 0;

	if (node)
	{
		if (node->parent && !node->left && !node->right)
			is_leaf = 1;
	}
	return (is_leaf);
}
