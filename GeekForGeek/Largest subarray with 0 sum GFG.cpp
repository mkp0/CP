int maxLen(int arr[], int n)
{
    map<int, int> m;

    m[0] = -1;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            arr[i] += arr[i - 1];
        }
        if (m.find(arr[i]) != m.end())
        {
            ans = max(ans, i - m[arr[i]]);
        }
        if (m.find(arr[i]) == m.end())
        {
            m[arr[i]] = i;
        }
    }
    return ans;
}