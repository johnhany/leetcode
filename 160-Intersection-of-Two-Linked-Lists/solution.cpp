#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

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
