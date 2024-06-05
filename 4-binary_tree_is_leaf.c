#include "binary_trees.h"

/**
 * const binary_tree_t-function  that checks if a node is a leaf
 * @node:pointer to the node to check
 * Return: 1 node is a leaf
 *         0 otherwise
 *         0 If node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node);
{
	if (node->left == NULL  && node->right == NULL)
		return (1);
	else
		return (0);
	return (0);
}

