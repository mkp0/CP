/*  the node structure is as follows

struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};
*/

//Function to clone a linked list with next and random pointer.
Node *copyList(Node *head)
{
    if (!head)
        return head;

    Node *temp = head;
    int i = 1;
    while (head)
    {
        Node *next = head->next;           // head->next
        head->next = new Node(head->data); // head->clone->null
        head->next->next = next;           // head->clone->next
        head->next->arb = head->arb;       // self explanatory
        head = next;                       // self expanotory
    }

    // return NULL;

    Node *ans = temp->next;
    head = temp;
    while (head)
    {
        if (head->arb)
            head->next->arb = head->arb->next;
        head = head->next->next;
    }

    // return NULL;
    head = temp;
    temp = ans;

    while (head)
    {
        head->next = head->next->next;
        if (temp->next)
        {
            temp->next = temp->next->next;
            temp = temp->next;
        }
        head = head->next;
    }

    //         x
    // 1 1 2 2 3 3 4 4
    return ans;
}