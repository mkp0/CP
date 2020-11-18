long long numberOfPaths(int m, int n)
{
    if (n <= 0 || m <= 0)
    {
        return 0;
    }
    if (m == 1 && n == 1)
    {
        return 1;
    }

    long long l = numberOfPaths(m, n - 1);
    long long d = numberOfPaths(m - 1, n);

    return l + d;
}