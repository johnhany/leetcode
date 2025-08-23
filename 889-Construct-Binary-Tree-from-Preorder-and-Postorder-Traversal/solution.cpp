#include "solution.hpp"


// https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-postorder-traversal/solution/tu-jie-889-gen-ju-qian-xu-he-hou-xu-bian-li-gou-2/

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

TreeNode* Solution::constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
    return builder(preorder, postorder, 0, preorder.size()-1, 0, preorder.size()-1);
}
