#include "binary_trees.h"

/**
 * binary_tree_nodes -a function that counts the nodes with at least 1 child
 *    in a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);

/* count current node */
if (tree->left != NULL || tree->right != NULL)
count++;

/* Traverse trough the left chiles nodes */
count += binary_tree_nodes(tree->left);
/* Traverse trough the right chiles nodes */
count += binary_tree_nodes(tree->right);

return (count);
}
