vector<int> calculateSpan(int arr[], int n)
{
    vector<int> ans(n, 0);
    ans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        int co = 1;
        while (i - co >= 0 && arr[i] >= arr[i - co])
        {
            co += ans[i - co];
        }
        ans[i] = co;
    }

    return ans;
}
