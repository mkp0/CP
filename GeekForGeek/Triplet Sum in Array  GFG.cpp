bool find3Numbers(int arr[], int n, int x)
{
    if (n < 3)
    {
        return false;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        int su = x - arr[i];

        while (k > j)
        {
            int a1 = arr[j];
            int a2 = arr[k];

            if (a1 + a2 == su)
            {
                return true;
            }
            if (a1 + a2 > su)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return false;
}