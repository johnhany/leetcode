#include "solution.hpp"

// https://leetcode-cn.com/problems/house-robber-iii/solution/tong-yong-si-lu-tuan-mie-da-jia-jie-she-wen-ti-b-2/

pair<int,int> Solution::dp(TreeNode* root) {
    if (root == nullptr)
        return {0, 0};
    pair<int,int> left = dp(root->left);
    pair<int,int> right = dp(root->right);

    int rob = root->val + left.first + right.first;

    int not_rob = max(left.first, left.second)
                + max(right.first, right.second);

    return {not_rob, rob};
}

int Solution::rob(TreeNode* root) {
    pair<int,int> res = dp(root);
    return max(res.first, res.second);
}
