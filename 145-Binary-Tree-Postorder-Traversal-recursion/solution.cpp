#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

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
