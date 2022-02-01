#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

vector<vector<int>> Solution::levelOrder(TreeNode* root) {
	if (root==nullptr)
		return {};
	TreeNode* flag = new TreeNode(0);
	TreeNode* cur;
	queue<TreeNode*> q;
	vector<vector<int>> rst;
	q.push(root);
	q.push(flag);
	while (!q.empty()) {
		if (q.front() == flag)
			break;
		vector<int> tmp;
		while (q.front()!=flag) {
			cur = q.front();
			tmp.push_back(cur->val);
			q.pop();
			if (cur->left)
				q.push(cur->left);
			if (cur->right)
				q.push(cur->right);
		}
		q.pop();
		q.push(flag);
		rst.push_back(tmp);
	}
	return rst;
}
