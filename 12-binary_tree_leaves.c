#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count
 * the number of leaves.
 * Return: The number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		a = binary_tree_leaves(tree->left);
		b = binary_tree_leaves(tree->right);
	}
	return (a + b);
}
