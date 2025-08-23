#include "solution.hpp"

bool Solution::isValidBST(TreeNode* root) {
    return isValidBST(root, nullptr, nullptr);
}

bool Solution::isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
    if(!root) return true;
    if((minNode && root->val <= minNode->val) || (maxNode && root->val >= maxNode->val))
        return false;
    return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}
