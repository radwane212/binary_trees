#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Pointer to the node.
 * Return: void
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);
	count_left += binary_tree_size(tree->left);
	count_right += binary_tree_size(tree->right);

	return (count_left + count_right + 1);
}
