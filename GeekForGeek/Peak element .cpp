int peakElement(int arr[], int n)
{
    int s = 0, e = n;
    if (n == 1)
    {
        return 0;
    }
    while (e > s)
    {
        int m = (s + e) / 2;
        if (m == 0)
        {
            if (arr[m] >= arr[m + 1])
            {
                return m;
            }
            else
            {
                return m + 1;
            }
        }
        if (m == (n - 1))
        {
            if (arr[m] >= arr[m - 1])
            {
                return m;
            }
            else
            {
                return m - 1;
            }
        }
        if ((arr[m] >= arr[m - 1]) && (arr[m] >= arr[m + 1]))
        {
            return m;
        }
        if (arr[m] <= arr[m - 1])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return s;
}