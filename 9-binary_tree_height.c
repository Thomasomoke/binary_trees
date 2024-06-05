#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 +  binary_tree_height(tree_left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree_right_) : 0;
	return (height_1 > height_r ? height_ 1 : height_r);
}

