class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int arr[26] = {0};

        int n = s.size();
        if (n != t.size())
            return false;

        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr[i])
                return false;
        }

        return true;
    }
};