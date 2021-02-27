int isLengthEvenOrOdd(struct Node *head)
{
    while (head)
    {
        if (!head->next)
        {
            return 1;
        }
        head = head->next->next;
    }
    return 0;
}