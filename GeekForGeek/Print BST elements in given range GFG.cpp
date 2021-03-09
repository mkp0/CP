void find(Node *root, int low, int high, vector<int> &ans)
{
    if (!root)
        return;

    if (root->data >= low && root->data <= high)
    {
        ans.push_back(root->data);
        find(root->left, low, high, ans);
        find(root->right, low, high, ans);
    }
    else if (root->data < low)
        find(root->right, low, high, ans);
    else
        find(root->left, low, high, ans);
}

vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> ans;

    find(root, low, high, ans);

    sort(ans.begin(), ans.end());

    return ans;
}