#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t leftside = 0, rightside = 0;

		leftside = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightside  = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((leftside > rightside) ? l : r);
	}
	return (0);
}
