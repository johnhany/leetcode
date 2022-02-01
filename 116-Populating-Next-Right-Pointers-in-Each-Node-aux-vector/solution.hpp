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


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

inline Node* stringToNode(string input) {
    if (!input.size()) {
        return nullptr;
    }

    string item;
    stringstream ss;
    ss.str(input);

    getline(ss, item, ',');
    Node* root = new Node(stoi(item));
    queue<Node*> nodeQueue;
    nodeQueue.push(root);

    while (true) {
        Node* node = nodeQueue.front();
        nodeQueue.pop();

        if (!getline(ss, item, ',')) {
            break;
        }

        if (item != "null") {
            int leftNumber = stoi(item);
            node->left = new Node(leftNumber);
            nodeQueue.push(node->left);
        }

        if (!getline(ss, item, ',')) {
            break;
        }

        if (item != "null") {
            int rightNumber = stoi(item);
            node->right = new Node(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}

inline string NodeToString(Node* root) {
    if (root == nullptr) {
        return "[]";
    }

    string output = "";
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node == nullptr) {
            //output += "null,";
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
    Node* connect(Node* root);
};

#endif