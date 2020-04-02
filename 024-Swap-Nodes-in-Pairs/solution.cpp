#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


ListNode* Solution::swapPairs(ListNode* head) {
	if (!head || !head->next)
		return head;
	ListNode *left = head, *right = head->next;
	ListNode *root = right;
	while (true) {
		left->next = right->next;
		right->next = left;
		right = left->next;
		if (!right || !right->next)
			break;
		left->next = right->next;
		left = right;
		right = right->next;
	}
	return root;
}
