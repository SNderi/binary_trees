#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int size_l = 0;
	int size_r = 0;

	if (tree->left)
		size_l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		size_r = 1 + binary_tree_height(tree->right);

	return (size_l - size_r);
}
