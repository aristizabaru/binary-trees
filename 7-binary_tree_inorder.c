#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * Description: Goes through a binary tree using in-order traversal
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
