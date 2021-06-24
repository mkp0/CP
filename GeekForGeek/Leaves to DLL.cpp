Node *pre, *head;

bool isleaf(Node *root)
{
    if (!root)
        return false;
    if (!root->left && !root->right)
        return true;
    return false;
}

Node *inorder(Node *root)
{
    if (!root)
        return nullptr;

    if (isleaf(root))
    {
        if (!head)
        {
            head = root;
            pre = root;
        }
        else
        {
            pre->right = root;
            root->left = pre;
            pre = root;
        }
        return nullptr;
    }

    root->left = inorder(root->left);
    root->right = inorder(root->right);

    return root;
}

Node *convertToDLL(Node *root)
{
    if (!root)
        return nullptr;

    head = NULL;
    pre = NULL;

    inorder(root);

    return head;
}