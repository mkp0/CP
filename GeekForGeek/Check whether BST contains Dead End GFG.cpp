bool DFS(Node *root, int mi, int ma)
{
    if (!root)
        return false;
    if (root->data - 1 == mi && root->data + 1 == ma)
        return true;

    return DFS(root->left, mi, root->data) || DFS(root->right, root->data, ma);
}

bool isDeadEnd(Node *root)
{
    return DFS(root, 0, INT_MAX);
}