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
binary_tree_t *pvt;

if (tree == NULL || tree->right == NULL)
return (NULL);

pvt = tree->right;
tree->right = pvt->left;

if (pvt->left != NULL)
pvt->left->parent = tree;

pvt->left = tree;
pvt->parent = tree->parent;

tree->parent = pvt;
return (pvt);
}
