#include "solution.hpp"

vector<int> Solution::postorderTraversal(TreeNode* root) {
	if (root==nullptr)
		return rst;
	if (root->left)
		postorderTraversal(root->left);
	if (root->right)
		postorderTraversal(root->right);
	if (root)
		rst.push_back(root->val);
	return rst;
}
