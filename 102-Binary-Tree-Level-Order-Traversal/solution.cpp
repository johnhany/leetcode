#include "solution.hpp"

vector<vector<int>> Solution::levelOrder(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    vector<vector<int>> rst;
    TreeNode *flag = new TreeNode(0);
    queue<TreeNode*> q;
    q.push(root);
    q.push(flag);
    while (q.size() > 1) {
        vector<int> tmp;
        while (q.front() != flag) {
            TreeNode *cur = q.front();
            tmp.push_back(cur->val);
            q.pop();
            if (cur->left) {
                q.push(cur->left);
            }
            if (cur->right) {
                q.push(cur->right);
            }
        }
        q.pop();
        q.push(flag);
        rst.push_back(tmp);
    }
    return rst;
}
