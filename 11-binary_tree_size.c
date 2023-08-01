#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);

/* count current node */
count++;

/* Traverse trough the left chiles nodes */
count += binary_tree_size(tree->left);
/* Traverse trough the right chiles nodes */
count += binary_tree_size(tree->right);

return (count);
}
