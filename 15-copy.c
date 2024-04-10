#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full and 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int R, L;

	if (tree == NULL)
		return (0);

	L = binary_tree_is_full((*tree).left);
	R = binary_tree_is_full((*tree).right);

	if ((L == 1 && R == 1) || (L == 0 && R == 0))
		return (1);
	{
		if (R < L)
			return (R);
		if (L < R)
			return (L);
	}
	return (0);
}
