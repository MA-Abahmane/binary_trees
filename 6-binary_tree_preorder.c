#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a binary tree using
 *   pre-order traversal
 *
 * @tree: binary tree to go through
 * @func: a pointer to a function to call for each node. The value in the
 *   node must be passed as a parameter to this function.
 *
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
return;

/* rint node value */
func(tree->n);

/* raverse the left child subtree */
binary_tree_preorder(tree->left, func);

/* raverse the right child subtree */
binary_tree_preorder(tree->right, func);
}
