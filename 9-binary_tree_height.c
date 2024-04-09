#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lheight, Rheight;

	if (tree == NULL)
		return (0);

	Lheight = binary_tree_height((*tree).left);
	Rheight = binary_tree_height((*tree).right);

	if ((*tree).right == NULL && (*tree).left == NULL)
		return (0);

	if (Rheight > Lheight)
		return (Rheight + 1);
	return (Lheight + 1);
}
