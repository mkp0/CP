class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {

        ListNode *ans = new ListNode(0);
        ListNode *realans = ans;

        while (l1 && l2)
        {
            if (l1->val > l2->val)
            {
                ans->next = l2;
                l2 = l2->next;
            }
            else
            {
                ans->next = l1;
                l1 = l1->next;
            }
            ans = ans->next;
        }

        if (l1)
            ans->next = l1;
        if (l2)
            ans->next = l2;

        return realans->next;
    }
};