int max_sum(int arr[], int n)
{
    int sum = 0, fir = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        fir += i * arr[i];
    }
    int ans = fir;
    for (int i = 0; i < n; i++)
    {
        fir = fir - sum + arr[i] * n;
        ans = max(ans, fir);
    }
    return ans;
}