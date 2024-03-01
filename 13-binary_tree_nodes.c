#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes with at
 * least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count
 * the number of nodes.
 * Return: The number of nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a, b, count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		count++;
	}
	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);
	return (a + b + count);
}
