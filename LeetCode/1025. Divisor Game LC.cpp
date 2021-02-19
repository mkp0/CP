class Solution
{
public:
    bool divisorGame(int N)
    {
        bool dp[N + 1];
        dp[1] = false;

        for (int i = 2; i <= N; i++)
        {
            dp[i] = false;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    int a = i / j;
                    int b = j;
                    if (a != i)
                        if (!dp[i - a])
                        {
                            dp[i] = true;
                            break;
                        }
                    if (!dp[i - b])
                    {
                        dp[i] = true;
                        break;
                    }
                }
            }
        }

        return dp[N];
    }
};