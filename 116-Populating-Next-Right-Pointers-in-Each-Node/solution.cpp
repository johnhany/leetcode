#include "solution.hpp"


Node* Solution::connect(Node* root) {
    if (root == nullptr) {
        return root;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        for (int i=0; i<n; i++) {
            Node *cur = q.front();
            q.pop();
            if (i != n-1) {
                cur->next = q.front();
            }
            if (cur->left) {
                q.push(cur->left);
            }
            if (cur->right) {
                q.push(cur->right);
            }
        }
    }
    return root;
}
