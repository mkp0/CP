class Solution
{
public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a, Job b)
    {
        return a.profit > b.profit;
    }

    vector<int> JobScheduling(Job arr[], int n)
    {
        vector<int> ans;
        sort(arr, arr + n, comp);

        int max_end = arr[0].dead;

        for (int i = 1; i < n; i++)
        {
            max_end = max(max_end, arr[i].dead);
        }

        vector<int> dp(max_end);

        for (int i = 0; i < n; i++)
        {
            int j = arr[i].dead - 1;
            while (j >= 0 && dp[j])
            {
                j--;
            }
            if (j >= 0)
                dp[j] = arr[i].profit;
        }
        int ans1 = 0;
        int ans2 = 0;

        for (auto x : dp)
        {
            if (x)
                ans1++, ans2 += x;
        }

        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;
    }
};