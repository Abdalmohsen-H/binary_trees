#include "binary_trees.h"
/**
	* binary_tree_insert_left - creates binary_tree node then append it
	* to perent's left node, and if parent already had left node
	* new node replaces it take old left node is it own left node
	* @parent: pointer to the parent node of the node
	* that will be created
	* @value: the integer value to be stored in created node.n
	* Return: pointer to the new node, or
	* NULL on failure or if parent is NULL
	*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt_node;

	if (parent == NULL)
		return (NULL);/*--parent is NULL--*/

	new_bt_node = binary_tree_node(parent, value);
	if (new_bt_node == NULL)
		return (NULL);/*--malloc failed--*/

	/*-- malloc succeed--*/
	if (parent->left) /* if parent->left != NULL*/
	{/*i.e. if parent had left node assign it to new node's left*/
		new_bt_node->left = parent->left;
		new_bt_node->left->parent = new_bt_node;/*-important-*/
	}

	/*--append new node as parent's left node-*/
	parent->left = new_bt_node;

	return (new_bt_node);
}
