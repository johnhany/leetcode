#include "solution.hpp"


// https://leetcode-cn.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by--22/

TreeNode* Solution::builder(vector<int>& preorder, vector<int>& inorder, int pstart, int pend, int istart, int iend) {
	if (istart > iend) return nullptr;
	int val = preorder[pstart];
	TreeNode* root = new TreeNode(val);
	int idx = -1;
	for (int i = istart; i <= iend; i++) {
		if (inorder[i] == val) {
			idx = i;
			break;
		}
	}
	root->left = builder(preorder, inorder, pstart+1, pstart+idx-istart, istart, idx-1);
	root->right = builder(preorder, inorder, pstart+idx-istart+1, pend, idx+1, iend);
	return root;
}

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder) {
	return builder(preorder, inorder, 0, preorder.size()-1, 0, preorder.size()-1);
}
