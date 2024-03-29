#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::isSymmetric(TreeNode* root) {
	queue<TreeNode*> q;
	TreeNode* left;
	TreeNode* right;
	q.push(root);
	q.push(root);
	while (!q.empty()) {
		left = q.front();
		q.pop();
		right = q.front();
		q.pop();
		if (left==nullptr && right==nullptr)
			continue;
		if (left==nullptr || right==nullptr)
			return false;
		if (left->val != right->val)
			return false;
		q.push(left->left);
		q.push(right->right);
		q.push(left->right);
		q.push(right->left);
	}
	return true;
}
