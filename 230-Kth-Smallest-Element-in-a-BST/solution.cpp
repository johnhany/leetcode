#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


void Solution::subSearch(TreeNode* root, int k, int& rst, int& count) {
	if (root == nullptr) {
		return;
	}
	subSearch(root->left, k, rst, count);
	count++;
	if (count == k) {
		rst = root->val;
		return;
	}
	subSearch(root->right, k, rst, count);
	return;
}

int Solution::kthSmallest(TreeNode* root, int k) {
	int rst = 0, count = 0;
	subSearch(root, k, rst, count);
	return rst;
}
