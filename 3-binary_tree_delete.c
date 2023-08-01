#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 *
 * @tree: binary tree to free
 *
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{

if (tree == NULL)
return;

/* 1st, delete the left node */
binary_tree_delete(tree->left);

/* then delete the right one */
binary_tree_delete(tree->right);

/* finally, delete the current node */
free(tree);
}
