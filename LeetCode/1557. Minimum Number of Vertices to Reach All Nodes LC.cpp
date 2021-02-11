class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<int> v(n, 0);

        for (auto x : edges)
        {
            v[x[1]]++;
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};