#include "binary_trees.h"
/**
 * binary_tree_is_root-checks if a given node is a roo
 * @node : pointer to the node to check
 * return : 1 if node is a root, otherwise 0
 *          0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}

