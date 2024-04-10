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
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int R, L;
	size_t height;

	if (tree == NULL)
		return (0);

	L = binary_tree_is_perfect((*tree).left);
	R = binary_tree_is_perfect((*tree).right);
	height = binary_tree_height(tree);

	if ((*tree).parent == NULL)
	{
		if (L == R)
			return (1);
		return (0);
	}

	if (height == 0)
	{
		if ((*tree).left == NULL && (*tree).right == NULL)
			return (1);
	}

	if (L != R)
		return (0);
	return (L + R + height);
}
