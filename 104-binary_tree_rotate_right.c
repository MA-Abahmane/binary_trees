#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a right-rotation
 *   on a binary tree
 *
 * @tree: binary tree to rotate
 *
 * Return: must return a pointer to the new root node of the tree
 *   once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *ptr;

/* The head node will always be the node on the left */
if (tree == NULL || tree->left == NULL)
return (NULL);

/* rotate tree right by switching positions clockwise*/
ptr = tree->left;
tree->left = ptr->right;

if (ptr->right != NULL)
ptr->right->parent = tree;

ptr->right = tree;
ptr->parent = tree->parent;

tree->parent = ptr;
return (ptr);
}
