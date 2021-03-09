struct node *update(struct node *start, int p)
{
    node *temp1 = start;

    while (--p)
    {
        start = start->next;
    }
    node *temp = start;
    start = start->next;
    temp->next = nullptr;

    temp = start;

    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = temp1;

    return start;
}