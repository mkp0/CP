int countNonLeafNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int ln = countNonLeafNodes(root->left);
    int rn = countNonLeafNodes(root->right);

    return ln + rn + 1;
}