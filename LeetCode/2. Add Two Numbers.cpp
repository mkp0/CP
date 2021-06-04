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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int fi = 0;
        int se = 0;
        int carry = 0;
        
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        
        while(l1 || l2 || carry)
        {
            if(l1)
            {
                fi = l1->val;
                l1 = l1->next;
            }else{
                fi = 0;
            }
            
            if(l2)
            {
                se = l2->val;
                l2 = l2->next;
            }else{
                se = 0;
            }
            int su = fi+se+carry;
            temp->next = new ListNode(su%10);
            temp = temp->next;
            carry = su/10;
        }
        
        return head->next;
    }
};