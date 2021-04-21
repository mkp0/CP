//Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root)
{
    if (!head)
        return;

    queue<TreeNode *> q;
    root = new TreeNode(head->data);
    head = head->next;
    if (head)
        q.push(root);

    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        if (head)
        {
            x->left = new TreeNode(head->data);
            ;
            q.push(x->left);
            head = head->next;
        }
        if (head)
        {
            x->right = new TreeNode(head->data);
            q.push(x->right);
            head = head->next;
        }
    }
}