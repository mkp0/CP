int sumOfLastN_Nodes(struct Node *head, int n)
{
    Node *temp = head;

    for (int i = 1; i <= n; i++)
    {
        head = head->next;
    }

    int ans = 0;

    while (head)
    {
        head = head->next;
        temp = temp->next;
    }

    while (temp)
    {
        ans += temp->data;
        temp = temp->next;
    }

    return ans;
}