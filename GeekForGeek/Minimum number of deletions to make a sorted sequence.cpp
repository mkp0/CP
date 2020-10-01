class Solution
{

public:
    int minDeletions(int arr[], int n)
    {
        int ans = 1;
        int memo[n];
        for (int i = 0; i < n; i++)
        {
            memo[i] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] > arr[j])
                {
                    if (memo[i] < memo[j] + 1)
                    {
                        memo[i] = memo[j] + 1;
                    }
                }
            }
            ans = max(memo[i], ans);
        }

        return n - ans;
    }
};