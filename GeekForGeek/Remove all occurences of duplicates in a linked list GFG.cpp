class Solution
{
public:
    Node *removeAllDuplicates(struct Node *head)
    {
        Node *ans = new Node(0);
        Node *temp = ans;

        while (head)
        {
            int co = 1;
            int d1 = head->data;

            Node *temp1 = head;
            head = head->next;
            while (head && head->data == d1)
            {
                co++;
                head = head->next;
            }
            if (co == 1)
            {
                ans->next = temp1;
                ans = ans->next;
            }
        }
        ans->next = nullptr;
        return temp->next;
    }
};