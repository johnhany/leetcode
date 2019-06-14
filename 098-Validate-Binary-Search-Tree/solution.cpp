#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isValidBST(TreeNode* root) {
	return isValidBST(root, NULL, NULL);
}

bool Solution::isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
	if(!root) return true;
	if((minNode && root->val <= minNode->val) || (maxNode && root->val >= maxNode->val))
		return false;
	return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
}
