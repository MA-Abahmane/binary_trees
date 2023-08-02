#include "binary_trees.h"

int if_bn_perfect(const binary_tree_t *tree);

/**
 * binary_tree_is_full -a function that checks if a binary tree is perfect
 *
 * @tree: given  binary tree tree
 *
 * Return: If tree is NULL, function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int Flag = 0;

if (tree == NULL)
return (0);

Flag = if_bn_perfect(tree);
if (Flag != 0)
return (1);

return (0);
}

/**
 * if_bn_perfect - a function that checks if a binary tree is perfect
 *  using recursion
 *
 * @tree: given  binary tree tree
 *
 * Return: If tree perfect is 1, not; 0
 */
int if_bn_perfect(const binary_tree_t *tree)
{
int left = 0;
int right = 0;

/* check if parent node had both a left and right chiled, if not; return 0 */
if (tree->left && tree->right)
{
    left = if_bn_perfect(tree->left) + 1;
    right = if_bn_perfect(tree->right) + 1;
    if (left == right && left != 0 && right != 0)
        return (left);
    return (0);
}
/* check if parent node dosen't have both a left and right chiled */
else if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
/* else; the left and right side of the tree are not same; return 0 */
else
{
return (0);
}
}
