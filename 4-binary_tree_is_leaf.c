#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Func. to check if a node is
 * a leaf or not
 * @node: Pointer to the node
 * Return: 1 if node is a leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1); /* it's a leaf node have no childs*/

	return (0);/* not a leaf node or it's a null*/
}
