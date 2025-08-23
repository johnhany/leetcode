#include "solution.hpp"


void Solution::subSearch(TreeNode* root, int k, int& rst, int& count) {
    if (root == nullptr) {
        return;
    }
    subSearch(root->left, k, rst, count);
    count++;
    if (count == k) {
        rst = root->val;
        return;
    }
    subSearch(root->right, k, rst, count);
    return;
}

int Solution::kthSmallest(TreeNode* root, int k) {
    int rst = 0, count = 0;
    subSearch(root, k, rst, count);
    return rst;
}
