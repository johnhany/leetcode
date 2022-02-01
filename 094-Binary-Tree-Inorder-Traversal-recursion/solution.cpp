#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

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
