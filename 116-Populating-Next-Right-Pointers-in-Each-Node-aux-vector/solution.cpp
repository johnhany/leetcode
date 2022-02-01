#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


Node* Solution::connect(Node* root) {
	if (root==nullptr)
		return root;
	vector<Node*> table;

	deque<Node*> q;
	q.push_back(root);
	Node* cur = root;
	while (!q.empty()) {
		cur = q.front();
		table.push_back(cur);
		q.pop_front();
		if (cur->left)
			q.push_back(cur->left);
		if (cur->right)
			q.push_back(cur->right);
	}

	int size = 1, idx = 0, n = table.size();
	while (idx < n) {
		for (int i=0; i<size-1; i++) {
			table[idx+i]->next = table[idx+i+1];
		}
		idx += size;
		size *= 2;
	}
	return root;
}
