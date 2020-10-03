int countLeaves(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int ll = countLeaves(root->left);
    int rl = countLeaves(root->right);

    return ll + rl;
}