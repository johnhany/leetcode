#include "solution.hpp"

struct compare {
    bool operator()(const ListNode* l, const ListNode* r) {
        return l->val > r->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty())
        return nullptr;
    ListNode* head = new ListNode(0);
    ListNode* cur = head;
    std::priority_queue<ListNode*, vector<ListNode*>, compare> q;
    for (ListNode* itr: lists) {
        if (itr)
            q.push(itr);
    }
    while (!q.empty()) {
        cur->next = q.top();
        q.pop();
        cur = cur->next;
        if (cur->next)
            q.push(cur->next);
    }
    return head->next;
}
