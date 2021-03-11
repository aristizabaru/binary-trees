#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	/* nodes of each subtree */
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);

	/* only add if it is not a leaf */
	if (tree->left || tree->right)
		return (node + 1);
	return (0);
}
