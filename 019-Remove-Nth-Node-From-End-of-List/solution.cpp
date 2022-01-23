#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
	vector<ListNode*> table;
	ListNode* root = head;
	while (head != nullptr) {
		table.emplace_back(head);
		head = head->next;
	}
	int len = table.size();
	if (n == len) {
		return root->next;
	}
	delete table[len-n];
	if (n == 1) {
		table[len-n-1]->next = nullptr;
	} else {
		table[len-n-1]->next = table[len-n+1];
	}
	return root;
}
