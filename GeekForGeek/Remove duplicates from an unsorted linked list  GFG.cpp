Node *removeDuplicates(Node *head)
{
    Node *ptr1;
    ptr1 = head;

    map<int, int> m;
    m[head->data]++;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        int d = ptr1->next->data;
        if (m[d])
        {
            ptr1->next = ptr1->next->next;
        }
        else
        {
            ptr1 = ptr1->next;
            m[d]++;
        }
    }
    return head;
}