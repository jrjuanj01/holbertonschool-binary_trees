#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 on Success, 0 on Faliure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	const binary_tree_t *checker = node;

	if (node == NULL)
		return (0);
	if ((*checker).left == NULL && (*checker).right == NULL)
		return (1);
	return (0);
}
