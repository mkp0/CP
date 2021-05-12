class Solution
{
public:
    //this problem will easy if you use recusrion atleast for me

    int dp[1001][1001];

    int func(int arr[], int st, int ed, int is)
    {
        if (st > ed)
            return 0;

        int ans = 0;

        if (dp[st][ed] != -1)
            return dp[st][ed];

        if (is)
        {
            ans = arr[st] + func(arr, st + 1, ed, !is);
            ans = max(ans, arr[ed] + func(arr, st, ed - 1, !is));
        }
        else
        {
            ans = func(arr, st + 1, ed, !is);
            ans = min(ans, func(arr, st, ed - 1, !is));
        }

        dp[st][ed] = ans;

        return ans;
    }

    int maxAmount(int arr[], int n)
    {
        memset(dp, -1, sizeof(dp));

        int ans = func(arr, 0, n - 1, 1);

        return ans;
    }
};