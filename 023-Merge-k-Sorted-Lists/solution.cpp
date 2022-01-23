#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

struct compare {
    bool operator()(const ListNode* l, const ListNode* r) {
        return l->val > r->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
	if (lists.empty())
		return nullptr;
	ListNode* head = new ListNode();
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
