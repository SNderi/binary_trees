#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 *
 * @tree: Double pointer to the root node of the BST to insert the value.
 * @value: Value to store in the node to be inserted.
 * Return: Pointer to the created node, or NULL on failure.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new;
	bst_t *parent = NULL;
	bst_t *node;

	if (!(*tree))
		return (*tree = binary_tree_node(NULL, value));

	node = *tree;
	while (node)
	{
		parent = node;
		if (value < node->n)
			node = node->left;

		else if (value > node->n)
			node = node->right;

		else if (value == node->n)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (parent == NULL)
		parent = new;
	else if (value < parent->n)
	{
		parent->left = new;
		new->parent = parent;
	}
	else
	{
		parent->right = new;
		new->parent = parent;
	}
	return (new);
}
