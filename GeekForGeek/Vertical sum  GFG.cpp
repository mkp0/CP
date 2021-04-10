class Solution
{
public:
    void preo(Node *root, int pt, map<int, int> &m)
    {
        if (!root)
            return;
        m[pt] += root->data;

        preo(root->left, pt - 1, m);
        preo(root->right, pt + 1, m);
    }

    vector<int> verticalSum(Node *root)
    {
        map<int, int> m;

        preo(root, 0, m);

        vector<int> ans;

        for (auto x : m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};