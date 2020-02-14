#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

int Solution::minDepth(TreeNode* root)  {
	if (root == nullptr)
		return 0;
	if (root->left == nullptr)
		return 1 + minDepth(root->right);
	else if (root->right == nullptr)
		return 1 + minDepth(root->left);
	else
		return min(1 + minDepth(root->left), 1 + minDepth(root->right));
}
