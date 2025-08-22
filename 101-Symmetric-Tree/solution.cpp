#include "solution.hpp"

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
