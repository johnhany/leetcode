#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


// https://labuladong.gitee.io/algo/2/18/23/

TreeNode* Solution::builder(vector<int>& preorder, vector<int>& postorder, int preStart, int preEnd, int postStart, int postEnd) {
	if (preStart > preEnd) {
        return nullptr;
    }
    if (preStart == preEnd) {
        return new TreeNode(preorder[preStart]);
    }

    int rootVal = preorder[preStart];
    int leftRootVal = preorder[preStart + 1];
    int index = 0;
    for (int i = postStart; i < postEnd; i++) {
        if (postorder[i] == leftRootVal) {
            index = i;
            break;
        }
    }
    int leftSize = index - postStart + 1;

    TreeNode* root = new TreeNode(rootVal);

    root->left = builder(preorder, postorder, preStart + 1, preStart + leftSize, postStart, index);
    root->right = builder(preorder, postorder, preStart + leftSize + 1, preEnd, index + 1, postEnd - 1);

    return root;
}

TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& postorder) {
	int len = preorder.size();
	return builder(preorder, postorder, 0, len-1, 0, len-1);
}
