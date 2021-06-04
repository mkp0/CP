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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        if (!head)
            return nullptr;

        ListNode *temp = head;
        ListNode *n1 = head, *n2 = head;
        while (n--)
        {
            n2 = n2->next;
        }

        if (!n2) // if length of linked list is equal to n
        {
            return head->next;
        }

        while (n2->next)
        {
            n2 = n2->next;
            n1 = n1->next;
        }

        n1->next = n1->next->next;

        return head;
    }
};