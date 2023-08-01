#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);

/* count current node */
if (tree->left == NULL && tree->right == NULL)
count++;

/* Traverse trough the left chiles nodes */
count += binary_tree_leaves(tree->left);
/* Traverse trough the right chiles nodes */
count += binary_tree_leaves(tree->right);

return (count);
}
