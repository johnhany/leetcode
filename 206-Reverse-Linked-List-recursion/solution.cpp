#include "solution.hpp"

// https://leetcode-cn.com/problems/reverse-linked-list/solution/fan-zhuan-lian-biao-shuang-zhi-zhen-di-gui-yao-mo-/

ListNode* Solution::reverseList(ListNode* head) {
    if (head==nullptr || head->next==nullptr)
        return head;
    ListNode* cur = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return cur;
}
