#include "solution.hpp"

static auto x = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	cin.tie(NULL);
	return 0;
}();

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
	if (!head) return NULL;
	vector<ListNode*> tmp;
	ListNode* curr = head;
	while(curr) {
		tmp.emplace_back(curr);
		curr = curr->next;
	}
	if (n == tmp.size())
		return head->next;
	else {
		delete tmp[tmp.size()-n];
		if (n == 1)
			tmp[tmp.size()-n-1]->next = NULL;
		else
			tmp[tmp.size()-n-1]->next = tmp[tmp.size()-n+1];
	}
	return head;
}
