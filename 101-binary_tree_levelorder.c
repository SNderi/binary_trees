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
 * printcurrlevel - Prints nodes at the current level
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function call for each node
 * @level: Level to print
 */

void printcurrlevel(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printcurrlevel(tree->left, func, level - 1);
		printcurrlevel(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary tree using
 *			level-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t lvl, maxlvl;

	if (!tree || !func)
		return;

	maxlvl = binary_tree_height(tree) + 1;

	for (lvl = 1; lvl <= maxlvl; lvl++)
		printcurrlevel(tree, func, lvl);
}
