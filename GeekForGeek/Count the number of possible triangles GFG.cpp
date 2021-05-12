int findNumberOfTriangles(int arr[], int n)
{
    int ans = 0;

    sort(arr, arr + n);

    for (int i = 2; i < n; i++)
    {
        int x = i - 1;
        int y = 0;

        while (x > y)
        {
            if (arr[x] + arr[y] > arr[i])
            {
                ans += x - y;
                x--;
            }
            else
            {
                y++;
            }
        }
    }

    return ans;
}