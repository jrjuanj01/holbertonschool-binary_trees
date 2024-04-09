#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = -1;

	if (tree == NULL)
		return (height);
	return ((binary_tree_height((*tree).left),
				binary_tree_height((*tree).right)) + 1);
}
