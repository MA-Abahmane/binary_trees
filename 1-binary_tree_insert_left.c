#include "binary_trees.h"

/**
 * binary_tree_insert_left -  a function that inserts a node as the
 *  left-child of another node.
 *
 * @value: the value to put in the new node
 * @parent: Pointer to the parent node
 * 
 * Return: function will return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *leftN;
binary_tree_t *old_leftN;

if (parent == NULL)
return (NULL);

// create left node
leftN = malloc(sizeof(binary_tree_t));
if (leftN == NULL)
return (NULL);

leftN->n = value;
leftN->left = NULL;
leftN->right = NULL;
leftN->parent = parent;

/* if left node already exists */
if (parent->left != NULL)
{
old_leftN = parent->left;

// set the new none in place of the old
parent->left = leftN;

// set the old left node to be the left one of the new node
leftN->left = old_leftN;
old_leftN->parent = leftN;
}
else
{
parent->left = leftN;
}

return (leftN);
}
