//top down

class Solution
{
public:
    bool PredictTheWinner(vector<int> &arr)
    {
        int n = arr.size();

        int dp[n][n];

        for (int i = 0; i < n; i++)
        {
            dp[i][i] = arr[i];
        }

        for (int len = 1; len < n; len++)
        {
            for (int i = 0; i < n - len; i++)
            {
                int j = i + len;
                dp[i][j] = max(arr[i] - dp[i + 1][j], arr[j] - dp[i][j - 1]);
            }
        }
        return (dp[0][n - 1] >= 0);
    }
};

//bottom up

class Solution
{
public:
    int dp[21][21];

    int func(vector<int> arr, bool is, int l, int r)
    {
        if (l > r)
            return 0;

        if (dp[l][r] != -1)
        {
            return dp[l][r];
        }

        if (is)
        {
            dp[l][r] = max(arr[l] + func(arr, false, l + 1, r), arr[r] + func(arr, false, l, r - 1));
        }
        else
        {
            dp[l][r] = min(-arr[l] + func(arr, true, l + 1, r), -arr[r] + func(arr, true, l, r - 1));
        }

        return dp[l][r];
    }

    bool PredictTheWinner(vector<int> &nums)
    {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        if (func(nums, true, 0, n - 1) >= 0)
        {
            return true;
        }

        return false;
    }
};