/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node *head, int data)
    {
        auto nobi = new Node(data);

        if (!head)
            return nobi;

        auto root = head;

        if (head->data > data)
        {
            nobi->next = head;
            return nobi;
        }

        while (root)
        {
            if (!root->next)
            {
                root->next = nobi;
                return head;
            }
            if (root->next->data > data)
            {
                auto temp = root->next;
                root->next = nobi;
                nobi->next = temp;
                return head;
            }

            root = root->next;
        }

        return head;
    }
};