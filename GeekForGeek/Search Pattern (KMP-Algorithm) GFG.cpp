class Solution
{
public:
    vector<int> kmp(const string &T, const string &P)
    {
        vector<int> ans;

        vector<int> pi(P.size(), 0);
        for (int i = 1, k = 0; i < P.size(); ++i)
        {
            while (k && P[k] != P[i])
                k = pi[k - 1];
            if (P[k] == P[i])
                ++k;
            pi[i] = k;
        }

        for (int i = 0, k = 0; i < T.size(); ++i)
        {
            while (k && P[k] != T[i])
                k = pi[k - 1];
            if (P[k] == T[i])
                ++k;
            if (k == P.size())
                ans.push_back(i + 2 - k);
        }
        if (ans.empty())
        {
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }

    vector<int> search(string pat, string txt)
    {
        return kmp(txt, pat);
    }
};