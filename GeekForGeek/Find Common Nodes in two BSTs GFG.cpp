class Solution
{
public:
    bool find(int val, Node *r2)
    {
        if (!r2)
            return false;
        if (r2->data == val)
            return true;
        if (r2->data > val)
            return find(val, r2->left);

        return find(val, r2->right);
    }

    vector<int> findCommon(Node *root1, Node *root2)
    {
        vector<int> ans;
        queue<Node *> q;
        if (root1)
            q.push(root1);

        while (!q.empty())
        {
            auto x = q.front();
            q.pop();

            if (find(x->data, root2))
            {
                ans.push_back(x->data);
            }
            if (x->left)
                q.push(x->left);
            if (x->right)
                q.push(x->right);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
