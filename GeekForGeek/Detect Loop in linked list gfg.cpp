bool detectLoop(Node *head)
{
    Node *slow = head;

    Node *fast = head->next;

    if (fast == NULL || slow == NULL)
        return false;

    while (1)
    {
        if (fast == NULL || fast->next == NULL)
            return false;
        if (slow == fast)
            return true;

        slow = slow->next;
        fast = fast->next->next;
    }

    return false;
}