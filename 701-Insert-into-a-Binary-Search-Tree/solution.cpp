#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::insertIntoBST(TreeNode* root, int val) {
	if (root == nullptr)
		return new TreeNode(val);
	if (root->val < val)
		root->right = insertIntoBST(root->right, val);
	if (root->val > val)
		root->left = insertIntoBST(root->left, val);
	return root;
}
