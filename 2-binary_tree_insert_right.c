#include "binary_trees.h"

/**
 * binary_tree_insert_righ-  inserts a node as the right-child of another node
 * @parent:  pointer to the node to insert the right-child in
 * @value :value to store in the new node
 *
 * Return: pointer to the created node
 *         NULL if the node is null         
 *         NULL if parent is null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
        binary_tree_t *new;

        if (!parent)
                return(NULL);

        new=malloc(sizeof(binary_tree_t));
        if (!new)
                return(NULL);

        new->n = value;
        new->parent = parent;
        new->left = NULL;
        new->right = parent->right;
        new->parent = new;
        if (new->right)
                new->right->new->parent=new;
        return new;
}

