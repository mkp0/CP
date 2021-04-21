int minl(Node *root, int s)
{
    if (!root)
        return 1e5;
    s++;
    if (!root->left && !root->right)
    {
        return s;
    }
    return min(minl(root->left, s), minl(root->right, s));
}

int DFS(Node *root, int d)
{
    if (!root || d <= 0)
        return 0;

    d--;
    if (d == 0 && !root->left && !root->right)
        return root->data;

    return DFS(root->left, d) + DFS(root->right, d);
}

int minLeafSum(Node *root)
{
    if (!root)
        return 0;
    int d = minl(root, 0);

    return DFS(root, d);
}