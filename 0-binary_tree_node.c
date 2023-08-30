#include "binary_trees.h"
/**
	* binary_tree_node - creates binary_tree node  without childs
	* @parent: pointer to the parent node of the node
  *	that will be created
	* @value: the integer value to be stored in created node.n
	* Return: pointer to the new node, or NULL on failure
	*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt_node;

	new_bt_node = malloc(sizeof(binary_tree_t));
	if (new_bt_node == NULL)/*--malloc failed--*/
		return (NULL);
	/*-- malloc succeed--*/
	new_bt_node->n = value;
	new_bt_node->parent = parent;
	new_bt_node->left = NULL;
	new_bt_node->right = NULL;

	return (new_bt_node);
}
