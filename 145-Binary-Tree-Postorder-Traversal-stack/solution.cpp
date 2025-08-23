#include "solution.hpp"

vector<int> Solution::postorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    TreeNode* prev = nullptr;
    vector<int> rst;
    while (root || !q.empty()) {
        while (root) {
            q.push(root);
            root = root->left;
        }
        TreeNode* tmp = q.top();
        if (tmp->right==nullptr || tmp->right==prev) {
            q.pop();
            rst.push_back(tmp->val);
            prev = tmp;
        } else {
            root = tmp->right;
        }
    }
    return rst;
}
