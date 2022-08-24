#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: Pointer to parent node
 * @value: Integer to store in the node
 *
 * Return: Pointer to new node on success, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
