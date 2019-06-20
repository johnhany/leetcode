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
	list<TreeNode*> q;
	q.emplace_back(root);
	while (!q.empty()) {
		list<TreeNode*> tmp;
		vector<int> level;
		for (auto i : q) {
			if (i->left != nullptr)
				tmp.emplace_back(i->left);
			if (i->right != nullptr)
				tmp.emplace_back(i->right);
			level.emplace_back(i->val);
		}
		q = tmp;
		rst.emplace_back(level);
	}
	return rst;
}
