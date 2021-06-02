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
    Node *zigZag(Node *head)
    {
        if (!head || !head->next)
            return head;
        Node *root = head;
        Node *prev = head;
        head = head->next;

        while (head)
        {
            if (prev->data > head->data)
            {
                int temp = prev->data;
                prev->data = head->data;
                head->data = temp;
            }
            if (head->next)
            {
                Node *nexti = head->next;
                if (nexti->data > head->data)
                {
                    int temp = nexti->data;
                    nexti->data = head->data;
                    head->data = temp;
                }
                head = head->next;
            }
            head = head->next;
            prev = prev->next->next;
        }

        return root;
    }
};