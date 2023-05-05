#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


void Solution::flatten(TreeNode* root)  {
	if (root == nullptr) return;

	flatten(root->left);
	flatten(root->right);

	TreeNode* left = root->left;
	TreeNode* right = root->right;

	root->left = nullptr;
	root->right = left;

	while (root->right) {
		root = root->right;
	}
	root->right = right;
	return;
}
