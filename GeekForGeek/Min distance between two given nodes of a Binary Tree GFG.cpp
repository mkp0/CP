Node *lca(Node *root, int a, int b)
{
    if (!root)
        return 0;

    if (root->data == a || root->data == b)
        return root;

    Node *l = lca(root->left, a, b);
    Node *r = lca(root->right, a, b);

    if (l && r)
        return root;
    if (l)
        return l;
    if (r)
        return r;

    return NULL;
}

int height(Node *root, int val)
{
    if (!root)
        return INT_MAX;

    if (root->data == val)
    {
        return 0;
    }

    int l = height(root->left, val);
    int r = height(root->right, val);

    if (l != INT_MAX || r != INT_MAX)
        return min(l, r) + 1;

    return INT_MAX;
}

int findDist(Node *root, int a, int b)
{
    Node *roott = lca(root, a, b);

    int lev1 = height(roott, a);
    int lev2 = height(roott, b);

    return lev1 + lev2;
}