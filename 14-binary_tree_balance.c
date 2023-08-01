#include "binary_trees.h"

/**
 * binary_tree_balance - a function that counts the nodes with at least 1 child
 *    in a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);

/* count current node */
if (tree->left != NULL && tree->right != NULL)
return (+2);
else if (tree->left != NULL || tree->right != NULL)
return (-1);
else
return (0);

return (count);
}
