class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        if (!head)
            return 0;
        int ans = head->val;
        head = head->next;
        while (head)
        {
            ans <<= 1;
            ans = ans | (head->val);
            head = head->next;
        }
        return ans;
    }
};