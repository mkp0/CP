struct Node *reverse(Node *node)
{
    Node *prev, *next, *cur;

    cur = node;
    prev = nullptr;

    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

struct Node *mergeResult(Node *node1, Node *node2)
{
    Node *ans = new Node;
    Node *temp;
    ans->data = 0;
    temp = ans;

    while (node1 && node2)
    {
        if (node1->data > node2->data)
        {
            ans->next = node2;
            node2 = node2->next;
        }
        else
        {
            ans->next = node1;
            node1 = node1->next;
        }
        ans = ans->next;
    }

    if (node1)
    {
        ans->next = node1;
    }
    if (node2)
    {
        ans->next = node2;
    }

    return reverse(temp->next);
}