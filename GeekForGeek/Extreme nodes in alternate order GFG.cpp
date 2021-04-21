class Solution
{
public:
    /* Function to print nodes of extreme corners
    of each level in alternate order */
    vector<int> ExtremeNodes(Node *root)
    {
        vector<int> ans;

        if (!root)
            return ans;

        queue<Node *> q;

        q.push(root);
        int co = 1;

        while (!q.empty())
        {
            queue<Node *> q1;
            co++;
            if (co % 2)
            {
                auto y = q.front();
                ans.push_back(y->data);
            }

            while (!q.empty())
            {
                auto x = q.front();
                if (x->left)
                    q1.push(x->left);
                if (x->right)
                    q1.push(x->right);
                q.pop();
                if (q.empty() && co % 2 == 0)
                {
                    ans.push_back(x->data);
                }
            }

            q = q1;
        }

        return ans;
    }
};
