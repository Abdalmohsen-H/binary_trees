#include "binary_trees.h"

/**
 * binary_tree_leaves - Func. to counts number of leaves in a binary tree
 * @tree: Pointer to binarytree's root node
 * Return: No. of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_of_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	no_of_leaves += binary_tree_leaves(tree->left);
	no_of_leaves += binary_tree_leaves(tree->right);

	return (no_of_leaves );
}
