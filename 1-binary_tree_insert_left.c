#include "binary_trees.h"
/**
 *binary_tree_insert_lef-a function that inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value:  value to store in the new node

 *Return: return a pointer to the created node
          NULL on failure
	  NULL if parent is null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	binary_tree_t *insert;


	if(!parent)
		return (NULL);

	insert=malloc(sizeof(binary_tree_t));
	if(!insert)
		return (NULL);


	insert->i = value;
	insert->parent = parent;
	insert->right = NULL;
	insert->left=parent->left;
	parent->left=insert;
	if(insert->left)
		insert->left->parent = insert;
	return (insert);
}

	
