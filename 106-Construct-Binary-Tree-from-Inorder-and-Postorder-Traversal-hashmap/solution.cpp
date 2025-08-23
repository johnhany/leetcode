#include "solution.hpp"


TreeNode* Solution::builder(vector<int>& postorder, int start, int end) {
    if (start > end) return nullptr;

    int rootVal = postorder[index--];
    TreeNode* root = new TreeNode(rootVal);
    int mid = map[rootVal];

    root->right = builder(postorder, mid + 1, end);
    root->left = builder(postorder, start, mid - 1);

    return root;
}

TreeNode* Solution::buildTree(vector<int>& inorder, vector<int>& postorder) {
    index = postorder.size() - 1;
    for (int i = 0; i < inorder.size(); ++i)
        map[inorder[i]] = i;
    return builder(postorder, 0, inorder.size() - 1);
}
