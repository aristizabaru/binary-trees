#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes binary tree
 * Description: Deletes an entire binary tree
 * @tree: root of binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		/* base case */
		if (!tree)
			return;
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
