#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the depth.
 * Return: Depth or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree->parent)
		dep = 1 + binary_tree_depth(tree->parent);

	return (dep);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 *	NULL otherwise.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t depth1, depth2;

	if (!first || !second)
		return (NULL);

	depth1 = binary_tree_depth(first);
	depth2 = binary_tree_depth(second);

	while (depth1 > depth2)
	{
		first = first->parent;
		depth1--;
	}

	while (depth2 > depth1)
	{
		second = second->parent;
		depth2--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
