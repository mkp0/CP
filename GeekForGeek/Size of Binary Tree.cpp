int getSize(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }

    int ls = getSize(node->left);
    int rs = getSize(node->right);
    return ls + rs + 1;
}