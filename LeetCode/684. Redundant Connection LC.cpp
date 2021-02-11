class Solution
{
public:
    int find(int val, vector<int> &par)
    {
        if (par[val] == val)
        {
            return val;
        }
        return find(par[val], par);
    }

    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int n = edges.size();
        vector<int> par(n + 1);
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            par[i] = i;
        }

        for (auto x : edges)
        {
            int a = find(x[0], par);
            int b = find(x[1], par);

            if (a != b)
            {
                par[a] = b;
            }
            else
            {
                ans.push_back(x[0]);
                ans.push_back(x[1]);
                return ans;
            }
        }
        return ans;
    }
};