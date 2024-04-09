#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = (binary_tree_height(tree->left));
	right = (binary_tree_height(tree->right));
	return (left - right);
}
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
	if (Rheight > Lheight)
		return (Rheight + 1);
	return (Lheight + 1);
}
