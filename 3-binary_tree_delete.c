#include "binary_trees.h"
/**
 * binary_tree_t-function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free (tree)
}

