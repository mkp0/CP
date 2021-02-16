class Solution
{
public:
    string restoreString(string s, vector<int> &idx)
    {
        string ans;
        int n = s.size();
        ans.resize(n);

        for (int i = 0; i < n; i++)
        {
            ans[idx[i]] = s[i];
        }

        return ans;
    }
};