class Solution
{
public:
    int getCount(struct Node *head)
    {
        int ans = 0;

        while (head)
        {
            ans++;
            head = head->next;
        }
        return ans;
    }
};