#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_node - A function that creates a new node
 * 
 * @parent: Parent or root of a tree
 * @value: Value of the node
 * 
 * Return: on Success new node, on failure NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
   binary_tree_t *new_node;

   new_node = malloc(sizeof(binary_tree_t));

   if (new_node == NULL)
   {
        return (NULL);
   }

   new_node->n = value;
   new_node->parent = parent;
   new_node->left = NULL;
   new_node->right = NULL;

   return (new_node);
}
=======
 * binary_tree_node - A function that creates new binary node
 * @parent: root or parent node
 * @value: node value
 * Return: On success ptr to new node, otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
>>>>>>> b1ce4a8 (Completed)
