#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<int> Solution::inorderTraversal(TreeNode* root) {
	stack<TreeNode*> q;
	vector<int> rst;
	while (root || !q.empty()) {
		while (root) {
			q.push(root);
			root = root->left;
		}
		root = q.top();
		q.pop();
		rst.push_back(root->val);
		root = root->right;
	}
	return rst;
}
