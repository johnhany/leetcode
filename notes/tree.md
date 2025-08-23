## binary tree traversal

[史上最全遍历二叉树详解](https://leetcode-cn.com/problems/binary-tree-preorder-traversal/solution/leetcodesuan-fa-xiu-lian-dong-hua-yan-shi-xbian-2/)

[图解 二叉树的四种遍历](https://leetcode-cn.com/problems/binary-tree-preorder-traversal/solution/tu-jie-er-cha-shu-de-si-chong-bian-li-by-z1m/)

[C++ 非递归实现二叉树的前中后序遍历](http://www.codebaoku.com/it-c/it-c-230036.html)

[https://stackoverflow.com/questions/2651112/is-recursion-ever-faster-than-looping](https://stackoverflow.com/questions/2651112/is-recursion-ever-faster-than-looping)

### preorder - recursive

```
# with private memeber: vector<int> rst

vector<int> preorderTraversal(TreeNode* root) {
    if (root==nullptr)
        return rst;
    if (root)
        rst.push_back(root->val);
    if (root->left)
        preorderTraversal(root->left);
    if (root->right)
        preorderTraversal(root->right);
    return rst;
}
```

### preorder - iteration

```
vector<int> preorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    vector<int> rst;
    while (root || !q.empty()) {
        while (root) {
            q.push(root);
            rst.push_back(root->val);
            root = root->left;
        }
        root = q.top();
        q.pop();
        root = root->right;
    }
    return rst;
}
```

### inorder - recursive

```
# with private memeber: vector<int> rst

vector<int> inorderTraversal(TreeNode* root) {
    if (root==nullptr)
        return rst;
    if (root->left)
        inorderTraversal(root->left);
    if (root)
        rst.push_back(root->val);
    if (root->right)
        inorderTraversal(root->right);
    return rst;
}
```

### inorder - iteration

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
        cur = tmp->right;
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

### postorder - recursive

```
# with private memeber: vector<int> rst

vector<int> postorderTraversal(TreeNode* root) {
    if (root==nullptr)
        return rst;
    if (root->left)
        postorderTraversal(root->left);
    if (root->right)
        postorderTraversal(root->right);
    if (root)
        rst.push_back(root->val);
    return rst;
}
```

### postorder - iteration

```
vector<int> postorderTraversal(TreeNode* root) {
    stack<TreeNode*> q;
    TreeNode* prev = nullptr;
    vector<int> rst;
    while (root || !q.empty()) {
        while (root) {
            q.push(root);
            root = root->left;
        }
        TreeNode* tmp = q.top();
        if (tmp->right==nullptr || tmp->right==prev) {
            q.pop();
            rst.push_back(tmp->val);
            prev = tmp;
        } else {
            root = tmp->right;
        }
    }
    return rst;
}
```
