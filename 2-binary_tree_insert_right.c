#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = parent->right;

	if ((new == NULL) || (parent == NULL))
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->parent = parent;
	parent->right = new;
	new->right = temp;

	if (temp != NULL)
		temp->parent = new;

	return (new);
}
