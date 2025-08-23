#include "solution.hpp"


void Solution::traverse(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    traverse(root->right);

    sum += root->val;
    root->val = sum;

    traverse(root->left);
}

TreeNode* Solution::bstToGst(TreeNode* root) {
    traverse(root);
    return root;
}
