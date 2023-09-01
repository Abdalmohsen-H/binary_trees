#include "binary_trees.h"

/**
 * binary_tree_height - Func. to calculate the height of a binary tree
 * @tree: Pointer to binarytree 's root node
 * Return: Height of binary tree if root isn't NULL, else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{size_t left_height = 0, right_height = 0;
	if (tree == NULL)/*condition to break recursion*/
		return 0;

	/*continue recursion, Find height of left and right subtrees*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* height = max(subtree_height_from_recursion) + 1*/
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
