#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

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
