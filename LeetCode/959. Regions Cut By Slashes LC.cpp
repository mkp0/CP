class Solution
{
public:
    vector<int> f;
    int co, n;
    int regionsBySlashes(vector<string> &grid)
    {
        n = grid.size();
        co = n * n * 4;
        for (int i = 0; i < co; i++)
        {
            f.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > 0)
                {
                    uni(g(i - 1, j, 2), g(i, j, 0));
                }
                if (j > 0)
                {
                    uni(g(i, j - 1, 1), g(i, j, 3));
                }
                if (grid[i][j] != '\\')
                {
                    uni(g(i, j, 0), g(i, j, 3));
                    uni(g(i, j, 1), g(i, j, 2));
                }
                if (grid[i][j] != '/')
                {
                    uni(g(i, j, 2), g(i, j, 3));
                    uni(g(i, j, 1), g(i, j, 0));
                }
            }
        }
        return co;
    }

    int find(int x)
    {
        if (f[x] != x)
        {
            f[x] = find(f[x]);
        }
        return f[x];
    }

    void uni(int a, int b)
    {
        a = find(a);
        b = find(b);

        if (a != b)
        {
            f[a] = b;
            co--;
        }
    }

    int g(int i, int j, int x)
    {
        return (i * n + j) * 4 + x;
    }
};