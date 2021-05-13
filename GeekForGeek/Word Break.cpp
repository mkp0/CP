//User function template for C++

// A : given string to search
// B : vector of available strings

int wordBreak(string A, vector<string> &B)
{

    int n = A.size();

    vector<bool> dp(n + 1, false);
    dp[0] = true; // "" empty string always exist

    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            string temp = A.substr(j, i - j);
            if (find(B.begin(), B.end(), temp) != B.end())
            {
                dp[i] = true;
            }
        }
    }

    return dp[n];
}