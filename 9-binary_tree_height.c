#include "binary_trees.h"
/**
  * binary_tree_height - returns the height of a binary tree
  * @tree: Tree to measure
  * Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}
