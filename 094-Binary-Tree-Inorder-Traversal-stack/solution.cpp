#include "solution.hpp"

vector<int> Solution::inorderTraversal(TreeNode* root) {
    stack<TreeNode*> tmp;
    vector<int> rst;
    while (root || !tmp.empty()) {
        if (root) {
            tmp.emplace(root);
            root = root->left;
        } else {
            root = tmp.top();
            tmp.pop();
            rst.emplace_back(root->val);
            root = root->right;
        }
    }
    return rst;
}
