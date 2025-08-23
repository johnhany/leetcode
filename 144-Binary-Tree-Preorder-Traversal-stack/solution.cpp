#include "solution.hpp"

vector<int> Solution::preorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    vector<int> rst;
    while (root || !q.empty()) {
        while (root) {
            q.push(root);
            rst.push_back(root->val);
            root = root->left;
        }
        root = q.top();
        q.pop();
        root = root->right;
    }
    return rst;
}
