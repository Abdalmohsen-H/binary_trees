#include "binary_trees.h"

/**
 * binary_tree_uncle - Func. to Find uncle of a node on a binarytree.
 * @node: Pointer to the node to find its uncle node
 * Return: return Pointer to the uncle node
 * or NULL If node or node's parent or node's parent's parent is NULL
 * or no uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	node->parent->parent == NULL)
		return (NULL);

	/*check if given node's parent is a left node of grand father*/
	if (node->parent->parent->left== node->parent)
		return (node->parent->parent->right);

	/* else return pointer to left node of grandfather*/
	/*this could be uncle or just null if no uncle-which meets all conditions*/
	return (node->parent->parent->left);
}
