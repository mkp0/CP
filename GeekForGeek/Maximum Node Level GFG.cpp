int maxNodeLevel(Node *root)
{
    int ans = 0;
    if (!root)
        return ans;
    int lev = 0, coo = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        queue<Node *> q1;
        int co = 0;
        while (!q.empty())
        {
            auto x = q.front();
            if (x->left)
                q1.push(x->left);
            if (x->right)
                q1.push(x->right);
            q.pop();
            co++;
        }
        q = q1;
        if (co > coo)
        {
            ans = lev;
            coo = co;
        }
        lev++;
    }
    return ans;
}