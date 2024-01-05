#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of element in the array
 *
 * Return: A pointer to the root node of the created BST, or NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i_index, j_ndex;

	if (array == NULL)
		return (NULL);

	for (i_index = 0; i_index < size; i_index++)
	{
		for (j_ndex = 0; j_ndex < i_index; j_ndex++)
		{
			if (array[j_ndex] == array[i_index])
				break;
		}
		if (j_ndex == i_index)
		{
			if (bst_insert(&tree, array[i_index]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
