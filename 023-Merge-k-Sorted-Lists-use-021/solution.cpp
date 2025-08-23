#include "solution.hpp"

ListNode* Solution::mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty())
        return nullptr;
    for (int i = 1; i < lists.size(); i *= 2) {
        for (int j = 0; j+i < lists.size(); j += 2*i) {
            lists[j] = mergeTwoLists(lists[j], lists[j+i]);
        }
    }
    return lists[0];
}

ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr)
        return list2;
    else if (list2 == nullptr)
        return list1;
    else if (list1->val > list2->val)
        std::swap(list1, list2);
    ListNode* head = list1;
    while (list1 && list2) {
        while (list1->next && list1->next->val <= list2->val) {
            list1 = list1->next;
        }
        std::swap(list2, list1->next);
        std::swap(list1->next->next, list2);

        list1 = list1->next;
    }
    if (list2) {
        list1->next = list2;
    }
    return head;
}
