#include "binary_trees.h"

/**
 * binary_tree_sibling - Func. to Find sibling of a node on a binarytree.
 * @node: Pointer to the node to find its sibling node
 * Return: return Pointer to the sibling node
 * or NULL .. if node or node's parent is NULL or no sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/*check if given is left node of its parent*/
	if (node->parent->left == node)
		return (node->parent->right);
	/* else return pointer to left node of it's parent*/
	/* it could be sibling or just null if no sibling-which meets all conditions*/
	return (node->parent->left);
}
