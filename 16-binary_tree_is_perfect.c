#include "binary_trees.h"
/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: Tree
  * Return: 0 on succes
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_perfect(tree->left);
		r = binary_tree_is_perfect(tree->right);
		return (l && r);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	r = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (l - r);
}

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
