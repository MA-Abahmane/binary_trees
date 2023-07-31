#include "binary_trees.h"

/**
 * binary_tree_node -  a function that creates a binary tree node
 *
 * @value: the value to put in the new node
 * @parent: Pointer to the parent node
 * 
 * Return: function will return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *rootN;

// create root node
rootN = malloc(sizeof(binary_tree_t));
if (rootN == NULL)
return (NULL);


rootN->n = value;
rootN->left = NULL;
rootN->right = NULL;
rootN->parent = parent;

return (rootN);
}
