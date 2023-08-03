#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left-rotation
 *  on a binary tree
 *
 * @tree: binary tree to rotate
 *
 * Return: must return a pointer to the new root node of the
 *   tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *ptr;

/* The head node will always be the node on the right */
if (tree == NULL || tree->right == NULL)
return (NULL);

/* rotate tree left by switching positions reverse clockwise*/
ptr = tree->right;
tree->right = ptr->left;

if (ptr->left != NULL)
ptr->left->parent = tree;

ptr->left = tree;
ptr->parent = tree->parent;

tree->parent = ptr;
return (ptr);
}
