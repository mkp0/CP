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
    
    
    bool isPalindrome(ListNode* head) {        
        if(!head)
            return true;
        
        ListNode* h1 = head;
        ListNode* h2 = head;
        
        while(h2 && h2->next)
        {
            h1 = h1->next;
            h2 = h2->next->next;
        }
        
        if(h2)
            h1 = h1->next;
        
        ListNode* curr = h1;
        ListNode* prev = NULL;
        ListNode* next;
        
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        h1 = prev;
        
        while(h1 && head)
        {
            if(h1->val != head->val)
            {
                return false;
            }
            h1 = h1->next;
            head = head->next;
        }
        
        return true;
    }
};