#include "binary_trees.h"

/**
 * binary_tree_size - that measures the size of a binary tree
 * @tree: is a binary tree
 * Return: the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
