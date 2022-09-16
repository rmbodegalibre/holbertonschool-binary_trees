#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree from a given node
 * @tree: pointer to node of tree to measure
 * Return: height of tree or 0 if NULL
 */

size_t left, right;

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	left = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	right = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;

	if (left > right)
	{
		return (left);
	}
	else
	{
		return (right);
	}

}
