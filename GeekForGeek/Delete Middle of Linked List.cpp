
/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
Node *deleteMid(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    if (!head || !head->next)
        return nullptr;

    Node *prev = slow;

    while (fast->next && fast->next->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast->next && fast != head)
    {
        prev = prev->next;
    }

    prev->next = prev->next->next;

    return head;
}