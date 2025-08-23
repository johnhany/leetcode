#include "solution.hpp"

ListNode* Solution::middleNode(ListNode* head) {
    if (head == nullptr)
        return head;
    ListNode *fast = head, *slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
