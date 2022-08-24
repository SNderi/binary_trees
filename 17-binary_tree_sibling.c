#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: Pointer to the node to find the sibling.
 * Return: Pointer to the sibling, NULL otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
	}

	if (node->parent->right && node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
	}

	return (NULL);
}
