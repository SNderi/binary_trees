#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 *
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = tree->right;

	if (!tree || !tree->right)
		return (NULL);

	tree->right = temp->left;
	temp->left = tree;

	if (tree->parent)
	{
		temp->parent = tree->parent;
		tree->parent = temp;
	}
	tree->parent = temp;

	return (tree->parent);
}
