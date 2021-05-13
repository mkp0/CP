//Function to return a list containing the bottom view of the given tree.
vector<int> bottomView(Node *root)
{
    vector<int> ans;

    if (!root)
        return ans;

    map<int, int> m;

    queue<pair<Node *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {
        auto x = q.front();
        q.pop();

        m[x.second] = x.first->data;

        if (x.first->left)
        {
            q.push({x.first->left, x.second - 1});
        }
        if (x.first->right)
        {
            q.push({x.first->right, x.second + 1});
        }
    }

    for (auto x : m)
    {
        ans.push_back(x.second);
    }

    return ans;
}