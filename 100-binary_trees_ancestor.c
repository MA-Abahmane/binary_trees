#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor of two nodes
 *
 * @first: 1st node
 * @second: 2st node
 *
 * Return: If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
const binary_tree_t *ance, *crnt;

if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *)first);

ance = first;
while (ance)
{

crnt = second->parent;
while (crnt)
{
if (ance == crnt)
return ((binary_tree_t *)ance);

crnt = crnt->parent;
}

ance = ance->parent;
}

return (NULL);
}
