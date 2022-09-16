#include "binary_trees.h"

/**
 * binary_tree_uncle - This function finds the uncle of a node
 * @node: Is a pointer to the node to find the uncle
 * Return: A pointer to the uncle node.
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
 
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || (!(node->parent) || !((node->parent)->parent)))
	{
		return (NULL);
	}

	if (node->parent == ((node->parent)->parent)->left)
	{
		return (((node->parent)->parent)->right);
	}

	else
	{
		return (((node->parent)->parent)->left);
	}
}
