int countPairs(struct Node *head1, struct Node *head2, int x)
{
    int ans = 0;

    map<int, int> m2;
    while (head2)
    {
        m2[head2->data]++;
        head2 = head2->next;
    }

    while (head1)
    {
        if (m2[x - head1->data])
        {
            ans++;
        }
        head1 = head1->next;
    }

    return ans;
}