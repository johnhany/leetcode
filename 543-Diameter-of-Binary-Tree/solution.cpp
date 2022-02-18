#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/1/7/

int Solution::subSearch(TreeNode* root) {
	if (root == nullptr)
		return 0;
	int left = subSearch(root->left);
	int right = subSearch(root->right);
	maxDia = max(maxDia, left+right);
	return 1 + max(left, right);
}

int Solution::diameterOfBinaryTree(TreeNode* root) {
	subSearch(root);
    return maxDia;
}
