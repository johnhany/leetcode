#include "solution.hpp"

ListNode* Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
	while (headA != headB) {
		if (headA == nullptr)
			headA = headB;
		else
			headA = headA->next;
		if (headB == nullptr)
			headB = headA;
		else
			headB = headB->next;
	}
	return headA;
}
