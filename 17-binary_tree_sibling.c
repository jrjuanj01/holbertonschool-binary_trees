#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer of the node or NULL if failed
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = node;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (sibling->parent->right == node)
		return (sibling->parent->left);
	if (sibling->parent->left == node)
		return (sibling->parent->right);
	return (0);
}
