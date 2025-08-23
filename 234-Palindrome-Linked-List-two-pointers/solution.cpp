#include "solution.hpp"


bool Solution::isPalindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast!=NULL && fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    //slow is at the middle element
    ListNode* prev = NULL;
    while (slow) {
        ListNode* temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }
    //reversed second half of the linked list and second half head is at prev
    ListNode* first = head;
    ListNode* second = prev;

    while (second) {
        if (first->val != second->val) {
            return false;
        }
        first = first->next;
        second = second->next;
    }

    return true;
}
