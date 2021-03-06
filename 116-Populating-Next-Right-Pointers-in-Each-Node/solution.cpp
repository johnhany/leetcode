#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


Node* Solution::connect(Node* root) {
	if (root == nullptr) return nullptr;
	queue<Node*> q;
	q.push(root);
	while (!q.empty()) {
		int len = q.size();
		for (int i = 0; i < len; i++) {
			Node* cur = q.front();
			q.pop();
			if (i != len-1)
				cur->next = q.front();
			if (cur->left)
				q.push(cur->left);
			if (cur->right)
				q.push(cur->right);
		}
	}
	return root;
}
