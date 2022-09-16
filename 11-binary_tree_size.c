#include "binary_trees.h"

/**
 * binary_tree_size - This function measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: 0 If tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
		return (0);
	}
	return (size);
}
