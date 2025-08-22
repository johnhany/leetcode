#include "solution.hpp"

vector<int> Solution::preorderTraversal(TreeNode* root) {
	if (root==nullptr)
		return rst;
	if (root)
		rst.push_back(root->val);
	if (root->left)
		preorderTraversal(root->left);
	if (root->right)
		preorderTraversal(root->right);
	return rst;
}
