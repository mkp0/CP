class Solution
{
public:
    int minSteps(string s, string t)
    {
        vector<int> m(26);

        for (auto x : s)
        {
            m[x - 'a']++;
        }

        int ans = 0;

        for (auto x : t)
        {
            if (m[x - 'a'])
            {
                m[x - 'a']--;
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};