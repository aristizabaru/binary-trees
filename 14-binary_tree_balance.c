#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heigth_l = 0;
	int heigth_r = 0;
	int difference = 0;

	if (!tree)
		return (0);

	if (tree->left)
		heigth_l = b_heigth(tree->left);
	if (tree->right)
		heigth_r = b_heigth(tree->right);
	difference = heigth_l - heigth_r;
	return (difference);
}

/**
 * b_heigth - Count tree heigth
 * @tree: pointer to the root node
 * Return: size of the branch
 */
int b_heigth(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (1);
	left = b_heigth(tree->left);
	right = b_heigth(tree->right);
	if (left > right)
		return (left + 1);
	return (right + 1);
}
