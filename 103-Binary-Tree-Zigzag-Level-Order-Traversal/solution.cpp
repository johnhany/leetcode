#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* root) {
	vector<vector<int>> rst;
	if (root == nullptr) return rst;
	vector<int> level;
	deque<TreeNode*> q;
	TreeNode* cur;
	q.emplace_back(root);
	q.emplace_back(nullptr);
	bool goRight = true;
	while (!q.empty()) {
		if (goRight) {
			cur = q.front();
			q.pop_front();
			if (cur == nullptr) {
				rst.push_back(level);
				level.clear();
				if (!q.empty()) {
					q.emplace_front(nullptr);
					goRight = !goRight;
				}
			} else {
				level.emplace_back(cur->val);
				if (cur->left != nullptr)
					q.emplace_back(cur->left);
				if (cur->right != nullptr)
					q.emplace_back(cur->right);
			}
		} else {
			cur = q.back();
			q.pop_back();
			if (cur == nullptr) {
				rst.push_back(level);
				level.clear();
				if (!q.empty()) {
					q.emplace_back(nullptr);
					goRight = !goRight;
				}
			} else {
				level.emplace_back(cur->val);
				if (cur->right != nullptr)
					q.emplace_front(cur->right);
				if (cur->left != nullptr)
					q.emplace_front(cur->left);
			}
		}
	}
	return rst;
}
