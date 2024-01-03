#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node-right != NULL || node->left != NULL)
		return (0);
	return (1);
}
