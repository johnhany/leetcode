#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

ListNode* Solution::reverseList(ListNode* head) {
	if (head==nullptr || head->next==nullptr)
		return head;
	ListNode* cur = reverseList(head->next);
	head->next->next = head;
	head->next = nullptr;
	return cur;
}
