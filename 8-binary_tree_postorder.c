#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary tree using
 *    post-order traversal
 *
 * @tree: binary tree to go through
 * @func: a pointer to a function to call for each node. The value in the
 *   node must be passed as a parameter to this function.
 *
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
return;

/* traverse the left child subtree */
binary_tree_postorder(tree->left, func);

/* traverse the right child subtree */
binary_tree_postorder(tree->right, func);

/* print node value */
func(tree->n);
}
