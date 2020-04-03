#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


ListNode* Solution::reverseK(ListNode* head, int k) {
	ListNode *prev = nullptr, *cur = head, *next;
	while (k) {
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
		k--;
	}
	return prev;
}

ListNode* Solution::reverseKGroup(ListNode* head, int k) {
	ListNode* end = head;
	for (int i = 0; i < k; i++) {
		if (!end) return head;
		end = end->next;
	}
	ListNode* newHead = reverseK(head, k);
	head->next = reverseKGroup(end, k);
	return newHead;
}
