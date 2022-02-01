## binary tree traversal

[史上最全遍历二叉树详解](https://leetcode-cn.com/problems/binary-tree-preorder-traversal/solution/leetcodesuan-fa-xiu-lian-dong-hua-yan-shi-xbian-2/)

[图解 二叉树的四种遍历](https://leetcode-cn.com/problems/binary-tree-preorder-traversal/solution/tu-jie-er-cha-shu-de-si-chong-bian-li-by-z1m/)

### inorder - non-recursive

```
vector<int> inorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    TreeNode* cur = root;
    vector<int> rst;
    while (cur || !q.empty()) {
        while (cur) {
            q.push(cur);
            cur = cur->left;
        }
        TreeNode* tmp = q.top();
        q.pop();
        rst.push_back(tmp->val);
        if (tmp->right) {
            cur = tmp->right;
        }
    }
    return rst;
}
```

```
vector<int> inorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    vector<int> rst;
    while (root || !q.empty()) {
        if (root) {
            q.push(root);
            root = root->left;
        } else {
            root = q.top();
            q.pop();
            rst.push_back(root->val);
            root = root->right;
        }
    }
    return rst;
}
```
