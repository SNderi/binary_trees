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

	if (!temp->right)
		tree->left = NULL;
	else
	{
		tree->left = temp->right;
		temp->right->parent = tree;
	}
	
	temp->right = tree;
	temp->parent = tree->parent;
	tree->parent = temp;

	return (temp);
}
