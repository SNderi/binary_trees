#include "binary_trees.h"

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
		size_l = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		size_r = 1 + binary_tree_balance(tree->right);

	return (size_l - size_r);
}
