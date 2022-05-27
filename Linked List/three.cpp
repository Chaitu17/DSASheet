/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        int num = 0;
        int tot = 0;
        while(ptr!=NULL) {
            tot++;
            ptr = ptr->next;
        }
        tot-=1;
        ptr = head;
        while(ptr!=NULL) {
            num += (ptr->val)*pow(2,tot);
            ptr = ptr->next;
            tot--;
        }
        return num;
    }
};
