#include "solution.hpp"


// https://leetcode.cn/problems/delete-node-in-a-bst/solution/miao-dong-jiu-wan-shi-liao-by-terry2020-tc0o/

TreeNode* Solution::deleteNode(TreeNode* root, int key) {
    if (root == nullptr)
        return nullptr;
    if (root->val == key) {
        if (root->left == nullptr)
            return root->right;
        if (root->right == nullptr)
            return root->left;

        TreeNode* minNode = root->right;
        while (minNode->left != nullptr)
            minNode = minNode->left;

        minNode->left = root->left;
        root = root->right;
    } else if (root->val > key) {
        root->left = deleteNode(root->left, key);
    } else if (root->val < key) {
        root->right = deleteNode(root->right, key);
    }
    return root;
}
