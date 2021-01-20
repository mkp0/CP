int minSwap(int *arr, int n, int k)
{
    int co = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] <= k)
            co++;

    int ans = 0;
    int maxi = 0;

    for (int i = 0; i < co; i++)
        if (arr[i] <= k)
            ans++;

    int ws = 0;
    maxi = ans;
    for (int i = co; i < n; i++)
    {
        if (arr[ws] <= k)
        {
            maxi--;
        }
        if (arr[i] <= k)
        {
            maxi++;
        }
        ws++;

        ans = max(maxi, ans);
    }

    return co - ans;
}