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
binary_tree_t *pvt;

if (tree == NULL || tree->left == NULL)
return (NULL);

pvt = tree->left;
tree->left = pvt->right;

if (pvt->right != NULL)
pvt->right->parent = tree;

pvt->right = tree;
pvt->parent = tree->parent;

tree->parent = pvt;
return (pvt);
}
