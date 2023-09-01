#include "binary_trees.h"

/**
 * binary_tree_postorder - Func. for postorder traversal of binary tree
 * i.e. to visit each node of binary tree using postorder traversal
 * postorder means : left right root
 * @tree: Pointer to the root of the binary tree
 * @func: (Pointer to a function) to call for each node for printing
 * data value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return ;/*condition to break recursion*/
	/*else continue recursion*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
