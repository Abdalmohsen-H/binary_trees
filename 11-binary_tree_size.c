#include "binary_trees.h"

/**
 * binary_tree_size - Func. to find the size of a binary tree without
 * knowing the height
 * A.K.A. No. of nodes in btree
 * @tree: Pointer binary tree's root node
 * Return: Size of tree or 0 if root node is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t btree_size = 0;

	if (tree == NULL) /* condition to end recursion */
		return (0);
	/*continue recursion & cacluating size*/
	btree_size += 1;
	btree_size += binary_tree_size(tree->right);
	btree_size += binary_tree_size(tree->left);
	return (btree_size);
}
