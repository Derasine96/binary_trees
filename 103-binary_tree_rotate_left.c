#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *split, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	split = tree->right;
	tmp = split->left;
	spit->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = split;
	split->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = split;
		else
			tmp->right = split;
	}

	return (split);
}
