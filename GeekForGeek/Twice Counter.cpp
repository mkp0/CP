class Solution
{
public:
    int countWords(string list[], int n)
    {
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            m[list[i]]++;
        }

        int ans = 0;
        for (auto x : m)
        {
            if (x.second == 2)
            {
                ans++;
            }
        }
        return ans;
    }
};