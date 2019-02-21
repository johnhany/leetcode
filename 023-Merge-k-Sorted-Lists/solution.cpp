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
	if (lists.size() == 0)
		return NULL;
	else if (lists.size() == 1)
		return lists[0];
	priority_queue<ListNode*, vector<ListNode*>, compare> pq;
	for (vector<ListNode*>::iterator itr = lists.begin(); itr != lists.end(); itr++) {
		if (*itr)
			pq.push(*itr);
	}
	ListNode* res = new ListNode(0);
	ListNode* cur = res;
	while (!pq.empty()) {
		cur->next = pq.top();
		pq.pop();
		cur = cur->next;
		if (cur->next)
			pq.push(cur->next);
	}
	return res->next;
}
