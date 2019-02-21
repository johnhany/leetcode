#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
	if (lists.size() == 0)
		return NULL;
	else if (lists.size() == 1)
		return lists[0];
	ListNode* res = lists[0];
	for (int i = 1; i < lists.size(); i++) {
		res = mergeTwoLists(res, lists[i]);
	}
	return res;
}

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (!l1 && !l2)
		return NULL;
	else if (!l1)
		return l2;
	else if (!l2)
		return l1;
	else {
		if (l1->val > l2->val)
			swap(l1, l2);
		ListNode *head = l1;
		while (l1->next && l2) {
			while (l2 && l2->val < l1->next->val) {
				swap(l1->next, l2->next);
				swap(l1->next, l2);
			}
			l1 = l1->next;
		}
		if (l2)
			l1->next = l2;
		return head;
	}
}
