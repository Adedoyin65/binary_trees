#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 * Return: The size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b, sum;

	if (tree == NULL)
	{
		return (0);
	}
	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	sum = a + b + 1;
	return (sum);
}
