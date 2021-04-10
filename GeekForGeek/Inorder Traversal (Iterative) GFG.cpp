vector<int> inOrder(Node *root)
{
    stack<Node *> s;
    vector<int> ans;

    if (!root)
        return ans;

    auto x = root;

    while (x || !s.empty())
    {
        while (x)
        {
            s.push(x);
            x = x->left;
        }

        x = s.top();
        ans.push_back(x->data);
        s.pop();
        x = x->right;
    }

    return ans;
}