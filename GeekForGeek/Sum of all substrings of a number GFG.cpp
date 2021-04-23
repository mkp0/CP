class Solution
{
public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s)
    {
        long long ans = 0;
        int n = s.size();
        vector<long long> dp(n, 0);
        int mod = 1e9 + 7;
        dp[0] = s[0] - '0';
        ans = dp[0];

        for (int i = 1; i < n; i++)
        {
            long long su = dp[i - 1] * 10 + (i + 1) * (s[i] - '0');
            su %= mod;
            dp[i] = su;
            ans += su;
            ans %= mod;
        }
        return ans;
    }
};