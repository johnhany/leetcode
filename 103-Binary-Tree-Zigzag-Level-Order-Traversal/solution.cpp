#include "solution.hpp"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* root) {
	if (root==nullptr)
		return {};
	TreeNode* flag = new TreeNode(0);
	TreeNode* cur;
	deque<TreeNode*> q;
	vector<vector<int>> rst;
	q.push_back(root);
	q.push_back(flag);
	int direction = 0;
	while (q.size()>1) {
		vector<int> tmp;
		if (direction == 0) {
			while (q.front()!=flag) {
				cur = q.front();
				tmp.push_back(cur->val);
				q.pop_front();
				if (cur->left)
					q.push_back(cur->left);
				if (cur->right)
					q.push_back(cur->right);
			}
			q.pop_front();
			q.push_front(flag);

			direction = 1;
		} else {
			while (q.back()!=flag) {
				cur = q.back();
				tmp.push_back(cur->val);
				q.pop_back();
				if (cur->right)
					q.push_front(cur->right);
				if (cur->left)
					q.push_front(cur->left);
			}
			q.pop_back();
			q.push_back(flag);

			direction = 0;
		}
		rst.push_back(tmp);
	}
	return rst;
}
