#include "solution.hpp"


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
