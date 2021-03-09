class Solution
{
public:
    int count(struct node *head, int x)
    {
        int ans = 0;
        while (head)
        {
            if (head->data == x)
            {
                ans++;
            }
            head = head->next;
        }
        return ans;
    }
};