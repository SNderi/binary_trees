#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = parent->left;

	if ((new == NULL) || (parent == NULL))
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->parent = parent;
	parent->left = new;
	new->left = temp;

	if (temp != NULL)
		temp->parent = new;

	return (new);
}
