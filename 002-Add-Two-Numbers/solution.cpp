#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();


ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* out = new ListNode(0);
	ListNode* res = out;
	int var1, var2, value, sum;
	int carry = 0;
	while(1) {
		if (l1 == NULL && l2 == NULL) {
			if (carry > 0) {
				out->next = new ListNode(1);
			}
			return res->next;
		}
		if (l1 != NULL) {
			var1 = l1->val;
			l1 = l1->next;
		} else {
			var1 = 0;
		}
		if (l2 != NULL) {
			var2 = l2->val;
			l2 = l2->next;
		} else {
			var2 = 0;
		}
		sum = var1 + var2 + carry;
		value = sum % 10;
		carry = sum / 10;
		out->next = new ListNode(value);
		out = out->next;
	}
}

