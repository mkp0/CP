vector<int> leftView(Node *root)
{
    vector<int> ans;

    if (!root)
        return ans;

    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        auto x = q.front();
        queue<Node *> q1;
        ans.push_back(x->data);

        while (!q.empty())
        {
            x = q.front();
            q.pop();

            if (x->left)
            {
                q1.push(x->left);
            }
            if (x->right)
            {
                q1.push(x->right);
            }
        }

        q = q1;
    }

    return ans;
}