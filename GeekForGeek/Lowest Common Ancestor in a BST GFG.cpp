Node *LCA(Node *root, int n1, int n2)
{
    while (1)
    {
        if (root->data > n1 && root->data > n2)
            root = root->left;
        else if (root->data < n1 && root->data < n2)
            root = root->right;
        else
        {
            return root;
        }
    }
    return root;
}