struct Node *reverseList(struct Node *head)
{
    Node *cur = head;
    Node *prev = NULL;
    Node *next = head->next;

    while (cur->next != NULL)
    {
        cur->next = prev;
        prev = cur;
        cur = next;
        next = next->next;
    }

    cur->next = prev;

    return cur;
}