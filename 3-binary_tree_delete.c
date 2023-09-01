#include "binary_trees.h"

/**
 * binary_tree_delete - Func. that deletes entire binary tree
 * @tree: intially is a Pointer to root node of binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);/*delete left first*/
		binary_tree_delete(tree->right);/*then delete right*/
		free(tree);
	}
}
