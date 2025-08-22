#include "solution.hpp"

vector<int> Solution::inorderTraversal(TreeNode* root) {
	if (root==nullptr)
		return rst;
	if (root->left)
		inorderTraversal(root->left);
	if (root)
		rst.push_back(root->val);
	if (root->right)
		inorderTraversal(root->right);
	return rst;
}
