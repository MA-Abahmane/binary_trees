#include "binary_trees.h"


/**
 * recurser - a function that uses recursion to go through
 *  the the binary tree
 *
 * @node: given node to check
 *
 * Return: the hight of the binary tree
 */
size_t recurser(const binary_tree_t *node)
{
/* count starts from 0 */
if (node == NULL)
return (0);

size_t leftHight = recurser(node->left);
size_t rightHight = recurser(node->right);
/* count while going up */
return (1 + (leftHight > rightHight ? leftHight : rightHight));
}


/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

if (tree == NULL)
return (0);

return (recurser(tree) - 1);
}
