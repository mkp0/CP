/* Link list Node 
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

/*You are required to complete below method*/

// x = 1
// 1 2 3 4 5 6

Node *deleteNode(Node *head, int x)
{
    if (!head)
        return head;

    if (x == 1)
        return head->next;

    Node *temp = head;
    x -= 1;
    while (--x)
    {
        temp = temp->next;
        if (!temp)
            return head;
    }

    if (temp->next)
    {
        temp->next = temp->next->next;
    }

    return head;
}