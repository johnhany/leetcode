#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::levelOrder(TreeNode* root) {
	vector<vector<int>> rst;
	if (root == nullptr) return rst;
	vector<int> level;
	queue<TreeNode*> q;
	TreeNode* cur;
	q.emplace(root);
	q.emplace(nullptr);
	while (!q.empty()) {
		cur = q.front();
		q.pop();
		if (cur == nullptr) {
			rst.push_back(level);
			level.clear();
			if (!q.empty())
				q.emplace(nullptr);
		} else {
			level.emplace_back(cur->val);
			if (cur->left != nullptr)
				q.emplace(cur->left);
			if (cur->right != nullptr)
				q.emplace(cur->right);
		}
	}
	return rst;
}
