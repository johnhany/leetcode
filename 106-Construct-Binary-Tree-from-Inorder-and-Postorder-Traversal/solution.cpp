#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


TreeNode* Solution::builder(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd) {
	if (inStart > inEnd) {
        return nullptr;
    }
    int rootVal = postorder[postEnd];
    int index = 0;
    for (int i = inStart; i <= inEnd; i++) {
        if (inorder[i] == rootVal) {
            index = i;
            break;
        }
    }
    TreeNode* root = new TreeNode(rootVal);

    root->left = builder(inorder, postorder, inStart, index - 1, postStart, postStart + index - inStart - 1);

    root->right = builder(inorder, postorder, index + 1, inEnd, postStart + index - inStart, postEnd - 1);
    return root;
}

TreeNode* Solution::buildTree(vector<int>& inorder, vector<int>& postorder) {
	return builder(inorder, postorder, 0, inorder.size()-1, 0, inorder.size()-1);
}
