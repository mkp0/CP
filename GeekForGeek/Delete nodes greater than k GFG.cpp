Node *deleteNode(Node *root, int k)
{
    if (!root)
        return root;

    if (root->data >= k)
    {
        root = root->left;
        root = deleteNode(root, k);
    }
    else
    {
        root->right = deleteNode(root->right, k);
    }

    return root;
}