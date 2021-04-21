//Function to find the vertical width of a Binary Tree.
void DFS(Node *root, int ref, int &mi, int &ma)
{
    if (!root)
        return;
    mi = min(mi, ref);
    ma = max(ma, ref);

    DFS(root->left, ref - 1, mi, ma);
    DFS(root->right, ref + 1, mi, ma);
}

int verticalWidth(Node *root)
{
    if (!root)
        return 0;
    int mi = 0;
    int ma = 0;

    DFS(root, 0, mi, ma);

    return ma - mi + 1;
}