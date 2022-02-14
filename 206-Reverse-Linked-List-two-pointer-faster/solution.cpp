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
	ListNode *cur=head, *tmp;
	while (head->next) {
		tmp = head->next->next;
		head->next->next = cur;
		cur = head->next;
		head->next = tmp;
	}
	return cur;
}
