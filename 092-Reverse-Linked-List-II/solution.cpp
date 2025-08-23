#include "solution.hpp"

ListNode* Solution::reverseHead(ListNode* head, int right) {
    if (right==1) {
        tail = head->next;
        return head;
    }
    ListNode* cur = reverseHead(head->next, right-1);
    head->next->next = head;
    head->next = tail;
    return cur;
}

ListNode* Solution::reverseBetween(ListNode* head, int left, int right) {
    if (left == 1)
        return reverseHead(head, right);
    head->next = reverseBetween(head->next, left-1, right-1);
    return head;
}
