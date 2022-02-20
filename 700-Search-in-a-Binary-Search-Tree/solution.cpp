#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/2/18/26/

TreeNode* Solution::searchBST(TreeNode* root, int target) {
	if (root == nullptr) {
		return nullptr;
	}
	if (root->val > target) {
		return searchBST(root->left, target);
	}
	if (root->val < target) {
		return searchBST(root->right, target);
	}
	return root;
}
