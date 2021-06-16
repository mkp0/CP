class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int st = s.size();
        int pt = p.size();
        vector<int> ans;
        if (pt > st)
            return ans;

        vector<int> s_space(26), p_space(26);

        for (int i = 0; i < pt; i++)
        {
            s_space[s[i] - 'a']++;
            p_space[p[i] - 'a']++;
        }

        s_space[s[pt - 1] - 'a']--;

        for (int i = pt - 1; i < st; i++)
        {
            s_space[s[i] - 'a']++;

            bool flag = true;
            for (int j = 0; j < 26; j++)
            {
                if (s_space[j] != p_space[j])
                    flag = false;
            }
            if (flag)
                ans.push_back(i - (pt - 1));
            s_space[s[i - (pt - 1)] - 'a']--;
        }

        return ans;
    }
};