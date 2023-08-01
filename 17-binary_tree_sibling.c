#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 *
 * @node: given node to check
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 *    If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

/* If the node has has a brother; return a pointer of it */
if (node->parent->left == node)
return (node->parent->right);

if (node->parent->right == node)
return (node->parent->left);

return (NULL);
}
