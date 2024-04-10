#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rl = 0, ll = 0;

	if (tree == NULL)
		return (0);

	ll = binary_tree_leaves((*tree).left);
	rl = binary_tree_leaves((*tree).right);

	if (((*tree).left == NULL && (*tree).right == NULL))
		return (ll + rl + 1);
	return (rl + ll);
}
