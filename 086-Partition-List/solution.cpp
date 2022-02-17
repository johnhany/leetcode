#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


ListNode* Solution::partition(ListNode* head, int x) {
	ListNode* small = new ListNode(0);
	ListNode* large = new ListNode(0);
	ListNode *shead = small, *lhead = large;
	while (head) {
		if (head->val >= x) {
			large->next = head;
			large = large->next;
		} else {
			small->next = head;
			small = small->next;
		}
		head = head->next;
	}
	small->next = lhead->next;
	large->next = nullptr;
	return shead->next;
}

