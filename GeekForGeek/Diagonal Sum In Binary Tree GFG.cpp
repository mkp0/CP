void preo(Node *root, int pt, map<int, int> &m)
{
    if (!root)
        return;

    m[pt] += root->data;

    preo(root->left, pt + 1, m);
    preo(root->right, pt, m);
}

vector<int> diagonalSum(Node *root)
{
    vector<int> ans;
    map<int, int> m;

    preo(root, 0, m);

    for (auto x : m)
    {
        ans.push_back(x.second);
    }

    return ans;
}