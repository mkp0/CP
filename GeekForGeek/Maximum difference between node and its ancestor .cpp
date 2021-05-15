int func(Node *root, int &ans)
{
    if (!root)
        return INT_MAX;

    int mi = min(func(root->left, ans), func(root->right, ans));

    ans = max(ans, root->data - mi);

    return min(mi, root->data);
}

int maxDiff(Node *root)
{
    if (!root)
        return 0;

    int ans = INT_MIN;

    func(root, ans);

    return ans;
}