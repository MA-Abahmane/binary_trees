#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the lowest common ancestor of two nodes
 *
 * @first: 1st node
 * @second: 2st node
 *
 * Return: If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
binary_tree_t *ance, *crnt;

if (first == NULL || second == NULL)
return (NULL);

ance = first;
while (ance)
{

crnt = second->parent;
while (crnt)
{
if (ance == crnt)
return (ance);

crnt = crnt->parent;
}

ance = ance->parent;
}

return (NULL);
}