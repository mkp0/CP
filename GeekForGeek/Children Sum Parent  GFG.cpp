int som(Node *root)
{
    if (!root)
        return 0;

    return root->data;
}

int isSumProperty(Node *root)
{
    int ans = 1;

    if (!root || (!root->left && !root->right))
    {
        return 1;
    }

    int su = som(root->left) + som(root->right);

    return (su == root->data) && isSumProperty(root->left) && isSumProperty(root->right);
}