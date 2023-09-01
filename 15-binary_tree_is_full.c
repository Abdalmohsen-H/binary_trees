#include "binary_trees.h"

/**
 * binary_tree_is_full - func. to check if a binary tree is full or not
 * binary tree is full if all nodes have zero or two child nodes
 * we will use recursion on left & right subtrees if root has 2 childs
 * @tree: Pointer to binarytree 's root node
 * Return: 1 if btree is full btree, Else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);/* end one of recursions*/

	if (tree->right == NULL || tree->left == NULL)
		return (0);/* end one of recursions*/

	/*else if (tree->right && tree->left)*/
	/* root node (in tree or subtree)has 2 childs continue recursion*/
	/* and condition will determine if btree is full or not */
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
