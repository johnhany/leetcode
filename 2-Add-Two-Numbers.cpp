/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* out = new ListNode(0);
        ListNode* res = out;
        int var1, var2, value, sum;
        int carry = 0;
        while(1) {
            if (l1 == NULL && l2 == NULL) {
                if (carry > 0) {
                    out->next = new ListNode(1);
                }
                return res->next;
            }
            if (l1 != NULL) {
                var1 = l1->val;
                l1 = l1->next;
            } else {
                var1 = 0;
            }
            if (l2 != NULL) {
                var2 = l2->val;
                l2 = l2->next;
            } else {
                var2 = 0;
            }
            sum = var1 + var2 + carry;
            value = sum % 10;
            carry = sum / 10;
            out->next = new ListNode(value);
            out = out->next;
        }
    }
};