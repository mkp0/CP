vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    queue<Node *> q;
    q.push(root);
    stack<int> temp;

    while (!q.empty())
    {
        auto x = q.front();
        temp.push(x->data);
        if (x->right)
            q.push(x->right);
        if (x->left)
            q.push(x->left);
        q.pop();
    }

    while (!temp.empty())
    {
        ans.push_back(temp.top());
        temp.pop();
    }
    return ans;
}