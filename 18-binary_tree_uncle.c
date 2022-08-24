#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: Pointer to the node to find the uncle
 * Return: Uncle or NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent || !node->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
	}

	if (node->parent == node->parent->parent->right)
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
	}
	return (NULL);
}
