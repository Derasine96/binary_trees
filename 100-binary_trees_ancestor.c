#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor was found, your function must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *start, *next;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	start = first->parent, next = second->parent;
	if (first == next || !start || (!start->parent && next))
		return (binary_trees_ancestor(first, next));
	else if (start == second || !next || (!next->parent && start))
		return (binary_trees_ancestor(start, second));

	return (binary_trees_ancestor(start, next));
}
