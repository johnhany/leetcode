#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isSymmetric(TreeNode* root) {
	if (root == nullptr) return true;
	return subSymmetric(root->left, root->right);
}

bool Solution::subSymmetric(TreeNode* left, TreeNode* right) {
	if (left == nullptr && right == nullptr) return true;
	else if (left != nullptr && right != nullptr && left->val == right->val) {
		return subSymmetric(left->left, right->right) && subSymmetric(left->right, right->left);
	} else
		return false;
}
