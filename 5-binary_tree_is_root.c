#include "binary_trees.h"

/**
 * binary_tree_is_root - Func. to check if a node is
 * a parent node
 * @node: Pointer to the node
 * Return: 1 if node is a root node, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1); /* it's a root node have no parent*/

	return (0);/* not a root node or it's a null*/
}
