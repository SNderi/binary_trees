#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 *
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = tree->left;

	if (!tree || !tree->left)
		return (NULL);

	tree->left = temp->right;
	temp->right = tree;

	if (tree->parent)
	{
		temp->parent = tree->parent;
		tree->parent = temp;
	}
	tree->parent = temp;

	return (tree->parent);
}
