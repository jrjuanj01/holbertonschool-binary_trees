#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int R, L;

	if (tree == NULL)
		return (0);

	L = binary_tree_is_perfect((*tree).left);
	R = binary_tree_is_perfect((*tree).right);

	if ((*tree).parent == NULL)
	{
		if (L == R)
			return (1);
		return (0);
	}
	if ((*tree).parent != NULL)
	{
		if (L == R)
			return (L + 1);
		if (L < R)
			return (R + 1);
		if (L > R)
			return (L + 1);
	}
	return (0);
}
