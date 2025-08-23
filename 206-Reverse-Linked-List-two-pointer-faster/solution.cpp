#include "solution.hpp"

// https://leetcode-cn.com/problems/reverse-linked-list/solution/fan-zhuan-lian-biao-shuang-zhi-zhen-di-gui-yao-mo-/

ListNode* Solution::reverseList(ListNode* head) {
    if (head==nullptr || head->next==nullptr)
        return head;
    ListNode *cur=head, *tmp;
    while (head->next) {
        tmp = head->next->next;
        head->next->next = cur;
        cur = head->next;
        head->next = tmp;
    }
    return cur;
}
