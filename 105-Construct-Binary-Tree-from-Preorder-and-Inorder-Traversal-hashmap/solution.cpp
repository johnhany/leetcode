#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::builder(vector<int>& preorder, int pstart, int istart, int treesize, unordered_map<int,int>& hash) {
	int val = preorder[pstart];
	TreeNode* root = new TreeNode(val);
	if (treesize == 1)
		return root;
	int idx = hash[val];
	int leftsize = idx - istart;
	int rightsize = treesize - leftsize - 1;

	if (leftsize>0)
		root->left = builder(preorder, pstart+1, istart, leftsize, hash);
	if (rightsize>0)
		root->right = builder(preorder, pstart+leftsize+1, idx+1, rightsize, hash);
	return root;
}

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
	int n = preorder.size();
	unordered_map<int,int> hash;
	for (int i=0; i<n; i++)
		hash[inorder[i]] = i;
	return builder(preorder, 0, 0, n, hash);
}
