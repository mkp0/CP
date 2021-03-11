class Solution
{
public:
    Node *rotate(Node *head, int k)
    {
        Node *h = head;
        Node *t;

        while (k--)
        {
            t = head;
            head = head->next;
        }

        if (!head)
        {
            return h;
        }

        Node *ans = head;

        while (head && head->next)
        {
            head = head->next;
        }

        if (head)
            head->next = h;
        t->next = nullptr;

        return ans;
    }
};