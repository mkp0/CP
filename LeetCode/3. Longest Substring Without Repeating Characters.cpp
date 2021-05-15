class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();

        map<char, int> m;

        int st = 1;
        int ed = 1;

        int ans = 0;

        while (ed <= n)
        {
            if (m[s[ed - 1]] >= st)
            {
                st = m[s[ed - 1]] + 1;
            }
            m[s[ed - 1]] = ed;

            ans = max(ans, ed - st + 1);
            ed++;
        }

        return ans;
    }
};