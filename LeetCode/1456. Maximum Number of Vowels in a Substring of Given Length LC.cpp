class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int ans = 0;
        int maxi = 0;
        char vowel[] = {'a', 'e', 'i', 'o', 'u'};

        int n = s.size();

        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (s[i] == vowel[j])
                    ans++;
            }
        }

        maxi = ans;

        for (int i = k; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (s[i - k] == vowel[j])
                    ans--;
            }
            for (int j = 0; j < 5; j++)
            {
                if (s[i] == vowel[j])
                    ans++;
            }
            maxi = max(maxi, ans);
        }

        return maxi;
    }
};