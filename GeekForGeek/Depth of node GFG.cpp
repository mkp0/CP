// A recursive function to find depth of the deepest odd level leaf
int depthOfOddLeafUtil(struct Node *root, int level)
{
    int ans = 0;
    if (!root)
        return ans;
    int lev = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        queue<Node *> q1;
        bool is = false;
        lev++;
        while (!q.empty())
        {
            auto x = q.front();
            if (x->left)
                q1.push(x->left);
            if (x->right)
                q1.push(x->right);
            q.pop();
            if (!x->left && !x->right && (lev % 2))
            {
                is = true;
            }
        }
        q = q1;
        if (is)
            ans = lev;
    }
    return ans;
}