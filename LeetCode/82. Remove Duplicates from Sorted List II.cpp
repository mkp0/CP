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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return head;

        ListNode *h1 = head;
        ListNode *h2 = head->next;
        ListNode *prev = nullptr;

        head = nullptr;

        while (h2)
        {
            while (h2 && (h2->val == h1->val))
            {
                h2 = h2->next;
            }

            if (h2 == h1->next)
            {
                if (!head)
                {
                    prev = h1;
                    head = prev;
                }
                else
                {
                    prev->next = h1;
                    prev = prev->next;
                }
            }
            if (!h2)
            {
                if (prev)
                    prev->next = nullptr;
                return head;
            }
            h1 = h2;
            h2 = h1->next;
        }

        if (h1 && !h2)
        {
            if (!head)
            {
                head = h1;
                prev = h1;
            }
            else
            {
                prev->next = h1;
                prev = prev->next;
            }
        }

        if (prev)
            prev->next = nullptr;

        return head;
    }
};