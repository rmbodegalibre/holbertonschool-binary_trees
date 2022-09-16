#include "binary_trees.h"

/**
 * binary_tree_size - This function measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: 0 If tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t child_left, child_right;

	if (tree == NULL)
	{
		return (0);
	}
	child_left = tree->left ? binary_tree_size(tree->left) : 0;
	child_right = tree->right ? binary_tree_size(tree->right) : 0;


	return (child_left + child_right + 1);
}
