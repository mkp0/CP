int minValue(Node *root)
{
    if (root->left == NULL)
    {
        return root->data;
    }
    return minValue(root->left);
}