bool comp(struct val a, struct val b)
{
    if (a.first > b.first)
    {
        return false;
    }
    return true;
}

int maxChainLen(struct val p[], int n)
{
    int dp[n];
    dp[0] = 1;

    int ans = 1;

    sort(p, p + n, comp);

    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (p[j].second < p[i].first && (dp[j] + 1 > dp[i]))
            {
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}