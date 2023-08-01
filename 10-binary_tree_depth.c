#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in a
 *   binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count = 0;
const binary_tree_t *ptr = tree;

if (tree == NULL)
return (0);

/* get to the 'root' */
while (ptr->parent != NULL)
{
count++;
ptr = ptr->parent;
}

return (count);
}
