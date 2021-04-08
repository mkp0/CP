int getMiddle(Node *head)
{
    if (!head)
    {
        return -1;
    }
    Node *slow = head, *fast = head->next;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast)
        slow = slow->next;

    return slow->data;
}