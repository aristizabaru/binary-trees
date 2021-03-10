#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node
 * Description: Inserts a node as the left-child of another node
 * @value: value for the node
 * @parent: Pointer to the parent node
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
		if (parent->left)
		{
			new_node->left = parent->left;
			if (new_node->left)
				new_node->left->parent = new_node;
		}
		new_node->parent = parent;
		parent->left = new_node;
	}

	return (new_node);
}
