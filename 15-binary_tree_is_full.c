#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 *    in a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int Left = 0, Right = 0;

if (tree == NULL)
return (0);

/* If the node has no children then it's a leaf node; return 1 */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* Recursively check left and right subtrees for fullness */
Left = binary_tree_is_full(tree->left);
Right = binary_tree_is_full(tree->right);

/* If both left and right subtrees are full, return true (1) */
if (Left && Right)
return (1);

/* Otherwise, return false (0) */
return (0);
}
