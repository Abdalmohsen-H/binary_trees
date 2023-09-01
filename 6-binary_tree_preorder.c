#include "binary_trees.h"

/**
 * binary_tree_preorder - Func. for preorder traversal of binary tree
 * i.e. to visit each node of binary tree using preorder traversal
 * preorder means : root left right
 * @tree: Pointer to the root of the binary tree
 * @func: (Pointer to a function) to call for each node for printing
 * data value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return ;/*condition to break recursion*/
	/*else continue recursion*/
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
