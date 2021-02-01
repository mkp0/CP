int trappingWater(int arr[], int n)
{

    int prev = arr[0];
    int prev_i = 0;

    int ans = 0;
    int temp = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= prev)
        {
            prev = arr[i];
            prev_i = i;
            temp = 0;
        }
        else
        {

            temp += prev - arr[i];
            ans += prev - arr[i];
        }
    }

    ans -= temp;
    prev = arr[n - 1];
    for (int i = n - 2; i >= prev_i; i--)
    {
        if (arr[i] >= prev)
        {
            prev = arr[i];
        }
        else
        {
            ans += prev - arr[i];
        }
    }

    return ans;
}