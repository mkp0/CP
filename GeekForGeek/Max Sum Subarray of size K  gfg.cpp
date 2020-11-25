class Solution
{
public:
    int maximumSumSubarray(int K, vector<int> &arr, int N)
    {
        int cur = 0;

        for (int i = 0; i < K; i++)
        {
            cur += arr[i];
        }
        int res = cur;

        for (int i = K; i < N; i++)
        {
            cur = cur - arr[i - K] + arr[i];
            res = max(res, cur);
        }
        return res;
    }
};