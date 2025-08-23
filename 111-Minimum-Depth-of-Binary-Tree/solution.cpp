#include "solution.hpp"

int Solution::minDepth(TreeNode* root)  {
    if (root == nullptr)
        return 0;
    if (root->left == nullptr)
        return 1 + minDepth(root->right);
    else if (root->right == nullptr)
        return 1 + minDepth(root->left);
    else
        return min(1 + minDepth(root->left), 1 + minDepth(root->right));
}
