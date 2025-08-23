#ifndef SOLUTION_021
#define SOLUTION_021

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <algorithm>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

inline ListNode* stringToListNode(vector<int>& input) {
    // Now convert that list into linked list
    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    for(int item : input) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
    }
    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

inline ListNode* stringToListNodeWithCycle(vector<int>& input, int pos) {
    // Now convert that list into linked list
    ListNode* dummyRoot = new ListNode(0);
    ListNode* ptr = dummyRoot;
    ListNode* cycleEntry = nullptr;
    int cnt = 0;
    for(int item : input) {
        ptr->next = new ListNode(item);
        ptr = ptr->next;
        if (cnt == pos)
            cycleEntry = ptr;
        cnt++;
    }
    ptr->next = cycleEntry;

    ptr = dummyRoot->next;
    delete dummyRoot;
    return ptr;
}

inline string listNodeToString(ListNode* node) {
    if (node == nullptr) {
        return "[]";
    }

    string result;
    while (node) {
        result += to_string(node->val) + ", ";
        node = node->next;
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

class Solution {
private:
    ListNode* tail;
public:
    bool hasCycle(ListNode *head);
};

#endif