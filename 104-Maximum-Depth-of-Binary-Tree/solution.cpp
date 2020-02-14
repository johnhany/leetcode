#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::maxDepth(TreeNode* root) {
	if (root == nullptr)
		return 0;
	return max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
}
