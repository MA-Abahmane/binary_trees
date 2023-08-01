#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 *
 * @node: given node to check
 *
 * Return: If node is NULL, return NULL
 *    If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

/* If the node has has a brother; return a pointer of it */
if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);

if (node->parent->parent->right == node->parent)
return (node->parent->parent->left);

return (NULL);
}
