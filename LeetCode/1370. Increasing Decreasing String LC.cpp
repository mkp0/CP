class Solution
{
public:
    string sortString(string s)
    {
        int arr[26] = {0};

        int n = s.size();
        for (auto x : s)
        {
            arr[x - 'a']++;
        }

        string ans;

        while (n)
        {
            for (int i = 0; i < 26; i++)
            {
                if (arr[i])
                {
                    ans.push_back(i + 'a');
                    arr[i]--;
                    n--;
                }
            }
            for (int i = 25; i >= 0; i--)
            {
                if (arr[i])
                {
                    ans.push_back(i + 'a');
                    arr[i]--;
                    n--;
                }
            }
        }

        return ans;
    }
};