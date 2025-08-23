#include "solution.hpp"

vector<int> Solution::inorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    vector<int> rst;
    while (root || !q.empty()) {
        while (root) {
            q.push(root);
            root = root->left;
        }
        root = q.top();
        q.pop();
        rst.push_back(root->val);
        root = root->right;
    }
    return rst;
}
