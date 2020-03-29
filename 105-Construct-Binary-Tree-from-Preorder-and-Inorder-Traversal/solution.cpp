#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::builder(vector<int>& preorder, vector<int>& inorder, int pstart, int pend, int istart, int iend) {
	if (istart > iend) return nullptr;
	TreeNode* root = new TreeNode(preorder[pstart]);
	int idx = -1;
	for (int i = istart; i <= iend; i++) {
		if (inorder[i] == preorder[pstart]) {
			idx = i;
			break;
		}
	}
	root->left = builder(preorder, inorder, pstart+1, pstart+idx-istart, istart, idx-1);
	root->right = builder(preorder, inorder, pstart+idx-istart+1, pend, idx+1, iend);
	return root;
}

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
	int len = preorder.size();
	return builder(preorder, inorder, 0, len-1, 0, len-1);
}
