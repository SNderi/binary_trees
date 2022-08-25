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

	if (!temp->left)
		tree->right = NULL;
	else
	{
		tree->right = temp->left;
		temp->left->parent = tree;
	}
	
	temp->left = tree;
	temp->parent = tree->parent;
	tree->parent = temp;

	return (temp);
}
