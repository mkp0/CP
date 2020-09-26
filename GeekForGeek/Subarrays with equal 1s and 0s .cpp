long long int countSubarrWithEqualZeroAndOne(int arr[], int N)
{
    int sum[N];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    sum[0] = arr[0];
    //store ans
    long long ans = 0;
    map<int, int> m;
    m[0] = 1;
    m[arr[0]] = 1;

    for (int i = 1; i < N; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
        m[sum[i]]++;
    }

    for (auto x : m)
    {
        ans += (x.second) * (x.second - 1) / 2;
    }

    return ans;
}