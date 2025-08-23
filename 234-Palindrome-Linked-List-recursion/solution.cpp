#include "solution.hpp"

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
