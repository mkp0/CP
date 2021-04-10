vector<int> preOrder(Node *root)
{
    stack<Node *> s;
    vector<int> ans;

    if (!root)
        return ans;

    s.push(root);

    while (!s.empty())
    {
        auto x = s.top();
        s.pop();
        ans.push_back(x->data);

        if (x->right)
        {
            s.push(x->right);
        }
        if (x->left)
        {
            s.push(x->left);
        }
    }

    return ans;
}