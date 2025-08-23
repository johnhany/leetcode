#include "solution.hpp"


ListNode* Solution::rotateRight(ListNode* head, int k) {
    if (head == nullptr || k == 0)
        return head;
    int n = 0;
    ListNode* tmp = head;
    while (tmp) {
        tmp = tmp->next;
        n++;
    }
    k = n - k % n;
    ListNode* root = head;
    tmp = head;
    while (k > 1) {
        tmp = tmp->next;
        k--;
    }
    ListNode* lead = tmp->next;
    tmp->next = nullptr;
    tmp = lead;
    if (tmp == nullptr)
        return root;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = root;
    return lead;
}

