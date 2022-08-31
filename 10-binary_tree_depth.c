#include "binary_trees.h"
/**
  * binary_tree_depth - returns the depth of a binary tree
  * @tree: Tree to depht
  * Return: depth of the tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count;

	for (count = 0; tree && tree->parent; ++count)
		tree = tree->parent;

	return (count);
}
