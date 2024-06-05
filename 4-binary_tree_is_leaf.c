#include "binary_trees.h"

/**
 * const binary_tree_t-function  that checks if a node is a leaf
 * @node:pointer to the node to check
 * Return: 1 node is a leaf
 *         0 otherwise
 *         0 If node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node);

const binary_tree_t*node
{
	if (!node)
		return(0);
	if (!node->left && !node->right)
		return (1);
	
	return (0);
}

