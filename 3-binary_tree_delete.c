#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree.
 * @tree: The tree to delete.
 * Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	free (tree);
}
