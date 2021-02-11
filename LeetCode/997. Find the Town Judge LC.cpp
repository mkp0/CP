class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        vector<int> v(N + 1, 0);

        if (trust.size() == 0 && N == 1)
        {
            return 1;
        }
        if (trust.size() == 0)
        {
            return -1;
        }

        for (auto x : trust)
        {
            v[x[1]]++;
            v[x[0]]--;
        }

        for (int i = 1; i <= N; i++)
        {
            if (v[i] == N - 1)
            {
                return i;
            }
        }
        return -1;
    }
};