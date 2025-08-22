#include "solution.hpp"


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
