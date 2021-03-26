class Solution
{
public:
    int find(vector<int> &par, int val)
    {
        if (par[val] != val)
        {
            par[val] = find(par, par[val]);
        }
        return par[val];
    }

    int findCircleNum(vector<vector<int>> &M)
    {
        if (M.empty())
            return 0;

        int n = M.size();

        vector<int> par(n);

        for (int i = 0; i < n; i++)
        {
            par[i] = i;
        }

        int group = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (M[i][j])
                {
                    int x = find(par, i);
                    int y = find(par, j);
                    if (x != y)
                    {
                        par[x] = y;
                        group--;
                    }
                }
            }
        }
        return group;
    }
};