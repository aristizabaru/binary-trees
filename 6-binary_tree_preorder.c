#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * Description: Goes through a binary tree using pre-order traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
