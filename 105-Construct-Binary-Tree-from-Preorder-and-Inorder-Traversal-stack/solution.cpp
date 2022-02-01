#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
	int n = preorder.size();
	stack<TreeNode*> q;
	TreeNode* root = new TreeNode(preorder[0]);
	q.push(root);
	int iidx = 0;
	for (int pidx=1; pidx<n; pidx++) {
		int val = preorder[pidx];
		TreeNode* top = q.top();
		if (top->val != inorder[iidx]) {
			top->left = new TreeNode(val);
			q.push(top->left);
		} else {
			while (!q.empty() && q.top()->val == inorder[iidx]) {
				top = q.top();
				q.pop();
				iidx++;
			}
			top->right = new TreeNode(val);
			q.push(top->right);
		}
	}
	return root;
}
