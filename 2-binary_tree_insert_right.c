#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Rnode = NULL;

	Rnode = malloc(sizeof(binary_tree_t));
	if (Rnode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	Rnode->n = value;
	Rnode->parent = parent;
	if (parent->right != NULL)
	{
		Rnode->right = parent->right;
		Rnode->right->parent = Rnode;
	}
	parent->right = Rnode;
	Rnode->left = NULL;
	return (Rnode);
}
