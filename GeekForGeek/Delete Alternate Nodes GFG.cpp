void deleteAlt(struct Node *head)
{
    if (!head || !head->next)
        return;
    Node *temp = head;

    while (temp)
    {
        if (temp->next)
        {
            temp->next = temp->next->next;
        }
        else
        {
            break;
        }
        temp = temp->next;
    }
    return;
}