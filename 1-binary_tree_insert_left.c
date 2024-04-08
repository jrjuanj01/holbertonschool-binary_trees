#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or NULL parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode;

	if (parent == NULL)
		return (NULL);
	lnode = malloc(sizeof(binary_tree_t));
	if (lnode == NULL)
		return (NULL);
	(*lnode).n = value;
	(*lnode).parent = parent;
	if ((*parent).left != NULL)
	{
		(*lnode).left = (*parent).left;
		(*(*lnode).left).parent = lnode;
	}
	(*parent).left = lnode;
	return (lnode);
}
