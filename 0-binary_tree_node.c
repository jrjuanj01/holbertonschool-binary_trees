#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node or NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		(*node).parent = NULL;
	(*node).parent = parent;
	(*node).n = value;
	(*node).left = NULL;
	(*node).right = NULL;
	return (node);
}
