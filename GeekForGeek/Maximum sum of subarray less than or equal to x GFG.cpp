class Solution
{

public:
    int findMaxSubarraySum(long long arr[], int n, long long sum)
    {
        int maxS = 0;
        int ans = 0;
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            maxS += arr[i];

            if (maxS > sum)
            {
                while (maxS > sum)
                {
                    maxS -= arr[j];
                    j++;
                }
            }

            ans = max(ans, maxS);
        }

        return ans;
    }
};
