#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::builder(vector<int>& preorder, vector<int>& inorder, int pstart, int istart, int treeSize, unordered_map<int, int>& iIndexMap) {
	int rootVal = preorder[pstart];
	TreeNode* root = new TreeNode(rootVal);
	if (treeSize == 1) return root;

	int iIndex = iIndexMap[rootVal];
	int leftSize = iIndex - istart;
	int rightSize = treeSize - leftSize - 1;
	if (leftSize > 0)
		root->left = builder(preorder, inorder, pstart + 1, istart, leftSize, iIndexMap);
	if (rightSize > 0)
		root->right = builder(preorder, inorder, pstart + 1 + leftSize, iIndex + 1, rightSize, iIndexMap);
	return root;
}

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
	int treeSize = preorder.size();
	if (treeSize == 0) return nullptr;
	unordered_map<int, int> iIndexMap;
	for (int i = 0; i < treeSize; i++) {
		iIndexMap[inorder[i]] = i;
	}

	return builder(preorder, inorder, 0, 0, treeSize, iIndexMap);
}
