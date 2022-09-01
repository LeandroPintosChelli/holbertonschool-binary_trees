#include "binary_trees.h"
/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree: Tree
  * Return: 0 on succes
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
	return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if (tree->right && tree->left)
		return (l && r);
	return (0);
}
