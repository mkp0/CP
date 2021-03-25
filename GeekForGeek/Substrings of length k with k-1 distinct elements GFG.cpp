class Solution
{
public:
    int countOfSubstrings(string S, int K)
    {
        map<char, int> vis;

        for (int i = 0; i < K; i++)
        {
            vis[S[i] - 'a']++;
        }

        int co = 0;
        int ans = 0;
        for (auto x : vis)
        {
            co++;
        }
        if (co == K - 1)
        {
            ans++;
        }
        for (int i = K; i < S.size(); i++)
        {
            vis[S[i - K] - 'a']--;
            vis[S[i] - 'a']++;
            co = 0;
            for (auto x : vis)
            {
                if (x.second > 0)
                {
                    co++;
                }
            }
            if (co == K - 1)
            {
                ans++;
            }
        }
        return ans;
    }
};