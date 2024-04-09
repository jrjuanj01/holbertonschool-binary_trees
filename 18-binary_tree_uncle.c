#include "binary_trees.h"
/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return: pointer to the uncle node or NULL if it failed
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = node;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (uncle->parent->parent->right == node->parent)
		return (uncle->parent->parent->left);
	if (uncle->parent->parent->left == node->parent)
		return (uncle->parent->parent->right);
	return (0);
}
