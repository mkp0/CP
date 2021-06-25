/* Following is the Linked list node structure */

/*
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

Node *getMiddle(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *reverse(Node *head)
{
    Node *pre = NULL;
    Node *curr = head;
    Node *next;

    while (curr)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }

    return pre;
}

void join(Node *lhalf, Node *rhalf)
{
    while (lhalf)
    {
        Node *temp = lhalf->next;
        lhalf->next = rhalf;
        rhalf = rhalf->next;
        lhalf->next->next = temp;
        lhalf = temp;
        if (!rhalf)
            return;
    }
}

void reorderList(Node *head)
{
    if (!head || !head->next)
        return;

    Node *midd = getMiddle(head);

    Node *rhalf = reverse(midd->next);

    midd->next = NULL;

    join(head, rhalf);
}