#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @tree: node
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root = 0;

	if (node)
	{
		if (!node->parent && (node->left || node->right))
			is_root = 1;
	}
	return (is_root);
}
