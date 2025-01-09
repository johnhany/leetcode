#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

// https://leetcode.cn/problems/linked-list-cycle-ii/solutions/12616/linked-list-cycle-ii-kuai-man-zhi-zhen-shuang-zhi-/

ListNode *Solution::detectCycle(ListNode *head) {
	ListNode *fast=head, *slow=head;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {
			fast = head;
			while (fast != slow) {
				fast = fast->next;
				slow = slow->next;
			}
			return fast;
		}
	}
	return nullptr;
}
