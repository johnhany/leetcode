#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {
	if (list1 == nullptr)
		return list2;
	else if (list2 == nullptr)
		return list1;
	if (list1->val > list2->val)
		std::swap(list1, list2);
	ListNode* head = list1;
	while (list1 && list2) {
		while (list1->next && list1->next->val <= list2->val) {
			list1 = list1->next;
		}
		std::swap(list2, list1->next);
		std::swap(list1->next->next, list2);
		
		list1 = list1->next;
	}
	if (list2) {
		list1->next = list2;
	}
	return head;
}
