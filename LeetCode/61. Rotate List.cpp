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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return head;

        int len = 0;
        ListNode *temp = head;

        while (temp)
        {
            len++;
            temp = temp->next;
        }

        k = k % len;

        if (k == 0)
            return head;

        temp = head;

        k = len - (1 + k);

        for (int i = 0; i < k; i++)
            temp = temp->next;

        ListNode *hod = temp->next;

        temp->next = nullptr;

        temp = hod;

        while (temp->next)
            temp = temp->next;

        temp->next = head;

        return hod;
    }
};