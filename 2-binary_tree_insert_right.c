#include "binary_trees.h"
/**
	* binary_tree_insert_right - creates binary_tree node then append it
	* to perent's right node, and if parent already had right node
	* new node replaces it take old right node is it own right node
	* @parent: pointer to the parent node of the node
	* that will be created
	* @value: the integer value to be stored in created node.n
	* Return: pointer to the new node, or
	* NULL on failure or if parent is NULL
	*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt_node;

	if (parent == NULL)
		return (NULL);/*--parent is NULL--*/

	new_bt_node = binary_tree_node(parent, value);
	if (new_bt_node == NULL)
		return (NULL);/*--malloc failed--*/

	/*-- malloc succeed--*/
	if (parent->right) /* if parent->right != NULL*/
	{/*i.e. if parent had right node assign it to new node's right*/
		new_bt_node->right = parent->right;
		new_bt_node->right->parent = new_bt_node;/*-important-*/
	}

	/*--append new node as parent's right node-*/
	parent->right = new_bt_node;

	return (new_bt_node);
}
