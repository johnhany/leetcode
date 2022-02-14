#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

bool Solution::subSearch(ListNode* head) {
	if (head==nullptr)
		return true;
	bool rst = subSearch(head->next);
	rst = rst && (left->val == head->val);
	left = left->next;
	return rst;
}

bool Solution::isPalindrome(ListNode* head) {
	left = head;
    return subSearch(head);
}
