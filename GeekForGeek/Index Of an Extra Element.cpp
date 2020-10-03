int findExtra(int a[], int b[], int n)
{
    if (a[n - 1] != b[n - 2])
    {
        return n - 1;
    }
    int s = 0, e = n - 1;
    while (e > s)
    {
        int m = (s + e) / 2;
        if (a[m] == b[m])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
    }
    return s;
}