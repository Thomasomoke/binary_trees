#include "binary_trees.h"
/**
 * binary_tree_delete-function
 * binary_tree_t- deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free (tree);
}

