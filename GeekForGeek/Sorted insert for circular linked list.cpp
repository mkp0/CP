// This function should return head of
// the modified list
class Solution
{
public:
    Node *sortedInsert(Node *head, int data)
    {
        auto temp = new Node(data);
        if (!head)
        {
            temp->next = temp;
            return temp;
        }
        else if (head->data > data)
        {
            temp->next = head;

            auto x = head;
            while (x->next != head)
                x = x->next;

            x->next = temp;

            return temp;
        }
        else
        {
            auto x = head;

            while (x->next != head)
            {
                if (x->next->data > data)
                {
                    auto p = x->next;
                    x->next = temp;
                    temp->next = p;
                    return head;
                }
                x = x->next;
            }
        }

        return head;
    }
};