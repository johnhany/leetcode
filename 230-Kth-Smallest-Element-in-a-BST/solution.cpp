#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/2/18/25/

void Solution::traverse(TreeNode* root, int k) {
	if (root == nullptr) {
		return;
	}
	traverse(root->left, k);

	rank++;
	if (k == rank) {
		res = root->val;
		return;
	}

	traverse(root->right, k);
}

int Solution::kthSmallest(TreeNode* root, int k) {
	traverse(root, k);
    return res;
}
