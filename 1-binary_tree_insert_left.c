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

	new_bt_node = malloc(sizeof(binary_tree_t));
	if (new_bt_node == NULL || parent == NULL)
		return (NULL);/*--malloc failed or parent is NULL--*/
	/*-- malloc succeed--*/
	new_bt_node->n = value;
	new_bt_node->parent = parent;
	new_bt_node->left = NULL;
	new_bt_node->right = NULL;

	if (parent->left)
	{
		new_bt_node->left = parent->left;
		new_bt_node->left->parent = new_bt_node;/*-important-*/
	}
	parent->left = new_bt_node
	return (new_bt_node);
}
