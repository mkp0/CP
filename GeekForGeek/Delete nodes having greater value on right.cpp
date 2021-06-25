/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
    Node *compute(Node *head)
    {
        if (!head)
            return head;

        head->next = compute(head->next);

        while (head->next)
        {
            if (head->next->data > head->data)
            {
                head = head->next;
            }
            else
            {
                break;
            }
        }

        return head;
    }
};