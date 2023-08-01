#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 *
 * @node: given node to check
 *
 * Return: Your function must return 1 if node is a root, otherwise 0
 *   If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

if (node == NULL)
return (0);

/* check if node is 'root' */
if (node->parent == NULL)
return (1);

return (0);
}
