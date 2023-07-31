#include "binary_trees.h"

/**
 * binary_tree_insert_right -  a function that inserts a node as the
 *   right-child of another node
 *
 * @value: the value to put in the new node
 * @parent: Pointer to the parent node
 * 
 * Return: function will return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *rightN;
binary_tree_t *old_rightN;

if (parent == NULL)
return (NULL);

// create left node
rightN = malloc(sizeof(binary_tree_t));
if (rightN == NULL)
return (NULL);

rightN->n = value;
rightN->left = NULL;
rightN->right = NULL;
rightN->parent = parent;

/* if right node already exists */
if (parent->right != NULL)
{
old_rightN = parent->right;

// set the new none in place of the old
parent->right = rightN;

// set the old left node to be the left one of the new node
rightN->right = old_rightN;
old_rightN->parent = rightN;
}
else
{
parent->right = rightN;
}

return (rightN);
}
