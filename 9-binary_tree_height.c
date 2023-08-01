#include "binary_trees.h"


/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: given node to check
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftHight = 0, rightHight = 0;

if (tree == NULL)
return (0);

if (tree->left)
leftHight = binary_tree_height(tree->left) + 1;
if (tree->right)
rightHight = binary_tree_height(tree->right) + 1;

/* count while going up */
return (leftHight > rightHight ? leftHight : rightHight);
}
