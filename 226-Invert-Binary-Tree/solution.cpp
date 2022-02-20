#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();



TreeNode* Solution::invertTree(TreeNode* root) {
	if (root == nullptr) {
		return nullptr;
	}

	swap(root->left, root->right);

	invertTree(root->left);
	invertTree(root->right);

	return root;
}
