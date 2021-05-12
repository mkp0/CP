long long maxArea(long long A[], int len)
{
    long long ans = 0;

    int x = 0;
    int y = len - 1;

    while (x < y)
    {
        ans = max(ans, (y - x) * min(A[x], A[y]));
        if (A[x] < A[y])
            x++;
        else
            y--;
    }
    return ans;
}