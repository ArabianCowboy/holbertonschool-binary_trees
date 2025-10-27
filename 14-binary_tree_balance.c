#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return (left_height + 1);
return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Balance factor (left height - right height), 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int height_left, height_right;

if (tree == NULL)
return (0);

height_left = (int)binary_tree_height(tree->left);
height_right = (int)binary_tree_height(tree->right);

return (height_left - height_right);
}
