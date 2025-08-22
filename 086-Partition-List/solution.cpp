#include "solution.hpp"


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

