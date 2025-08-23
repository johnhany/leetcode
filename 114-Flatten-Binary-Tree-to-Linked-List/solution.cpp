#include "solution.hpp"


void Solution::flatten(TreeNode* root)  {
    if (root == nullptr) return;

    flatten(root->left);
    flatten(root->right);

    TreeNode* left = root->left;
    TreeNode* right = root->right;

    root->left = nullptr;
    root->right = left;

    while (root->right) {
        root = root->right;
    }
    root->right = right;
    return;
}
