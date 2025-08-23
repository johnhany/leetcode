#include "solution.hpp"

ListNode* Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *a = headA, *b = headB;
    while (a != b) {
        if (a == nullptr)
            a = headB;
        else
            a = a->next;
        if (b == nullptr)
            b = headA;
        else
            b = b->next;
    }
    return a;
}
