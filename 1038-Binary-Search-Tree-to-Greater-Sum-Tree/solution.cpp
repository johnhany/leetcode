#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/2/18/25/

void Solution::traverse(TreeNode* root) {
	if (root == nullptr) {
		return;
	}
	traverse(root->right);

	sum += root->val;
	root->val = sum;

	traverse(root->left);
}

TreeNode* Solution::bstToGst(TreeNode* root) {
	traverse(root);
    return root;
}
