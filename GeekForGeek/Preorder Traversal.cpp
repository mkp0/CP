void preorder(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    preorder(root->left, v);

    preorder(root->right, v);
}

vector<int> preorder(Node *root)
{
    vector<int> v;
    preorder(root, v);
    return v;
}