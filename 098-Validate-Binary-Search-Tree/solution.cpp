#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isValidBST(TreeNode* root) {
	return isValid(root, LONG_MIN, LONG_MAX);
}

bool Solution::isValid(TreeNode* root, long left, long right) {
	if (root==nullptr)
		return true;
	if (left >= root->val || right <= root->val)
		return false;
	return isValid(root->left, left, root->val) && isValid(root->right, root->val, right);
}
