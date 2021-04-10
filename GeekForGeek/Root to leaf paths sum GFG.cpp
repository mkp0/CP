void preorder(Node *root, long long &ans, long long cal)
{
    if (!root)
    {
        return;
    }

    cal = cal * 10;
    cal = cal + root->data;

    if (!root->left && !root->right)
    {
        ans += cal;
        return;
    }

    preorder(root->left, ans, cal);
    preorder(root->right, ans, cal);
}

long long treePathsSum(Node *root)
{
    long long ans = 0;
    long long cal = 0;
    preorder(root, ans, cal);

    return ans;
}