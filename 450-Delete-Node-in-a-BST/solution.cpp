#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://labuladong.gitee.io/algo/2/18/26/

TreeNode* Solution::deleteNode(TreeNode* root, int key) {
	if (root == nullptr)
		return nullptr;
	if (root->val == key) {
		if (root->left == nullptr)
			return root->right;
		if (root->right == nullptr)
			return root->left;

		TreeNode* minNode = root->right;
		while (minNode->left != nullptr)
			minNode = minNode->left;

		root->right = deleteNode(root->right, minNode->val);

		minNode->left = root->left;
		minNode->right = root->right;
		root = minNode;
	} else if (root->val > key) {
		root->left = deleteNode(root->left, key);
	} else if (root->val < key) {
		root->right = deleteNode(root->right, key);
	}
	return root;
}
