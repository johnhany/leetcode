#include "solution.hpp"

bool Solution::isValidBST(TreeNode* root) {
	return isValid(root, LONG_MIN, LONG_MAX);
}

bool Solution::isValid(TreeNode* root, long left, long right) {
	if (root==nullptr)
		return true;
	if (left >= root->val || right <= root->val)
		return false;
	return isValid(root->left, left, root->val) && isValid(root->right, root->val, right);
}
