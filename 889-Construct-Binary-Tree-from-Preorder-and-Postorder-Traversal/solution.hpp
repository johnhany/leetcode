#ifndef SOLUTION_029
#define SOLUTION_029

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>
#include <iterator>
#include <unordered_map>
#include <unordered_set>
#include <stack>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

inline TreeNode* stringToTreeNode(string input) {
    if (!input.size()) {
        return nullptr;
    }

    string item;
    stringstream ss;
    ss.str(input);

    getline(ss, item, ',');
    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (true) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        if (!getline(ss, item, ',')) {
            break;
        }

        if (item != "null") {
            int leftNumber = stoi(item);
            node->left = new TreeNode(leftNumber);
            nodeQueue.push(node->left);
        }

        if (!getline(ss, item, ',')) {
            break;
        }

        if (item != "null") {
            int rightNumber = stoi(item);
            node->right = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}

inline string treeNodeToString(TreeNode* root) {
    if (root == nullptr) {
      return "[]";
    }

    string output = "";
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node == nullptr) {
          output += "null,";
          continue;
        }

        output += to_string(node->val) + ",";
        q.push(node->left);
        q.push(node->right);
    }
    return "[" + output.substr(0, output.length() - 1) + "]";
}


class Solution {
public:
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
    TreeNode* builder(vector<int>& preorder, vector<int>& inorder, int pstart, int pend, int istart, int iend);
};

#endif