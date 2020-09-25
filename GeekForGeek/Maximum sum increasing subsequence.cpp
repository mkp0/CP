
class Solution
{

public:
    int maxSumIS(int arr[], int n)
    {
        long long memo[n];
        for (long long i = 0; i < n; i++)
        {
            memo[i] = arr[i];
        }
        for (long long i = 1; i < n; i++)
        {
            for (long long j = 0; j < i; j++)
            {
                if (arr[j] < arr[i])
                {
                    memo[i] = max(memo[j] + arr[i], memo[i]);
                }
            }
        }

        long long ans = arr[0];
        for (long long i = 0; i < n; i++)
        {
            ans = max(ans, memo[i]);
        }
        return ans;
    }
};