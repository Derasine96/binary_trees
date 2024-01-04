#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *cut, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	cut = tree->right;
	tmp = cut->left;
	cut->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = cut;
	cut->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = cut;
		else
			tmp->right = cut;
	}

	return (cut);
}
