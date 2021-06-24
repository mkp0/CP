class Solution
{
public:
    Node *pairWiseSwap(struct Node *head)
    {
        if (!head || !head->next)
            return head;

        Node *a = head;
        Node *b = head->next;

        a->next = pairWiseSwap(b->next);
        b->next = a;

        return b;
    }
};