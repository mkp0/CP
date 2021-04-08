void inorder(vector<int> &ans, Node *root, int k)
{
    if (!root)
    {
        return;
    }
    if (k == 0)
    {
        ans.push_back(root->data);
        return;
    }
    inorder(ans, root->left, k - 1);
    inorder(ans, root->right, k - 1);
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    inorder(ans, root, k);

    return ans;
}