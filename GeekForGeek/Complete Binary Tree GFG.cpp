bool isCompleteBT(Node *root)
{
    if (!root)
        return true;

    queue<Node *> q;
    q.push(root);

    int len = 1;

    bool is = true;

    while (!q.empty())
    {
        queue<Node *> q1;
        bool is = true;
        int xxx = 1;
        int yyy = 1;
        while (!q.empty())
        {
            auto x = q.front();
            q.pop();
            xxx++;

            if (x->left)
            {
                if ((xxx - yyy) != 1)
                    return false;
                q.push(x->left);
                yyy++;
            }
            xxx++;
            if (x->right)
            {
                if ((xxx - yyy) != 1)
                    return false;
                q.push(x->right);
                yyy++;
            }
            if (!is && q.size())
                return false;

            len *= 2;
        }

        q = q1;
    }

    return true;
}