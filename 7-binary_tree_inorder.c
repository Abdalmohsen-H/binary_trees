#include "binary_trees.h"

/**
 * binary_tree_inorder - Func. for inorder traversal of binary tree
 * i.e. to visit each node of binary tree using inorder traversal
 * inorder means : left root right
 * @tree: Pointer to the root of the binary tree
 * @func: (Pointer to a function) to call for each node for printing
 * data value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return ;/*condition to break recursion*/
	/*else continue recursion*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
