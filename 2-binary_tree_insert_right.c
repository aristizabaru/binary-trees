#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node
 * Description: Inserts a node as the right-child of another node
 * @value: value for the node
 * @parent: Pointer to the parent node
 * Return: new_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = NULL;
		if (parent->right)
		{
			new_node->right = parent->right;
			if (new_node->right)
				new_node->right->parent = new_node;
		}
		new_node->parent = parent;
		parent->right = new_node;
	}

	return (new_node);
}
