Node *removeDuplicates(Node *root)
{
    Node *h = root;
    if (root == NULL)
        return root;

    while (root->next != NULL)
    {
        Node *temp = root;
        while (root->next && (root->data == root->next->data))
        {
            root = root->next;
        }
        root = root->next;
        temp->next = root;
        if (root == NULL)
            return h;
    }

    return h;
}