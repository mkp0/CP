class Solution
{
public:
    vector<int> topView(Node *root)
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

            if (m.find(x.second) == m.end())
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
};