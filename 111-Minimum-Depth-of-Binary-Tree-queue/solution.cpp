#include "solution.hpp"

int Solution::minDepth(TreeNode* root)  {
    if (!root)
        return 0;

    std::queue<std::pair<TreeNode*, int>> q {};
    q.push({ root, 1 });

    while (!q.empty()) {
        auto [current, depth] = q.front();
        q.pop();

        if (!current->left && !current->right)
            return depth;

        if (current->left) {
            q.push({ current->left, depth + 1});
        }
        if (current->right) {
            q.push({ current->right, depth + 1});
        }
    }

    return -1;
}
