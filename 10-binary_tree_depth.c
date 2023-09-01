#include "binary_trees.h"

/**
 * binary_tree_depth - Func. to calculate depth of a node in a binary tree
 * A.K.A. No. of nodes in btree
 * @tree: Pointer to the node in binary tree to measure the depth of it
 * Return: Depth of node in b-tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*condition to break recursion*/
	if (tree == NULL || tree->parent == NULL)
		return (0);
	/*continue recursion, Find depth of a node in a binary tree*/
	return (1 + binary_tree_depth(tree->parent));
}
