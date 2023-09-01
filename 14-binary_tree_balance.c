#include "binary_trees.h"
size_t btree_levels(const binary_tree_t *tree);
/**
 * binary_tree_balance - Func. to calculate balance factor of a binary tree
 * @tree: Pointer to binarytree 's root node
 * Return: Balance factor of a binary tree or (0 if root is NULL)
 * balance factor could be zero  if root has no childs or hight the same
 * on left and right sub trees
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/* else find balance factor */
	return (btree_levels(tree->left) - btree_levels(tree->right));
}

/**
 * btree_levels - Func. to calculate number of levels of a binary tree
 * @tree: Pointer to binarytree 's root node
 * Return: no of levels  of binary tree if root isn't NULL, else 0
 */
size_t btree_levels(const binary_tree_t *tree)
{size_t lft_hght = 0, rigt_hght = 0;

	if (tree == NULL)/*condition to break recursion*/
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*continue recursion, Find height of left and right subtrees*/
	lft_hght = btree_levels(tree->left);
	rigt_hght = btree_levels(tree->right);

	/* height = max(subtree_height_from_recursion) + 1*/
	return ((lft_hght > rigt_hght) ? (lft_hght + 1) : (rigt_hght + 1));
}
