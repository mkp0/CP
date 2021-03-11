class Solution
{
public:
    void rearrange(struct Node *head)
    {
        if (!head || !head->next)
            return;

        Node *one = head;
        Node *two = head->next;
        Node *fix = two;

        Node *temp;
        temp = head->next->next;
        int co = 0;

        while (temp)
        {
            if (co % 2)
            {
                two->next = temp;
                two = two->next;
            }
            else
            {
                one->next = temp;
                one = one->next;
            }
            temp = temp->next;
            co++;
        }

        two->next = nullptr;
        one->next = nullptr;

        Node *next, *prev = NULL, *cur = fix;

        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        one->next = prev;
    }
};