#include "binary_trees.h"

/**
 * binary_tree_nodes - Func. to counts number of nodes
 * in a binary tree with at least 1 child
 * @tree: Pointer to binarytree's root node
 * Return: No. of parents in binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_of_parents = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);

	no_of_parents += binary_tree_leaves(tree->left);
	no_of_parents += binary_tree_leaves(tree->right);

	return (no_of_parents);
}
