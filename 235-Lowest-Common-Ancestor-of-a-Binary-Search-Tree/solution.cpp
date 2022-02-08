#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	if (p->val > q->val)
		swap(p, q);
	while (true) {
		if (p->val > root->val)
			root = root->right;
		else if (q->val < root->val)
			root = root->left;
		else
			return root;
	}
}
