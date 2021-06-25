// s   m       e
// 1 2 3 4 5 6 7
long long int floorSqrt(long long int x)
{
    long long st = 1;
    long long ed = x;
    long long ans = 1;
    while (ed >= st)
    {
        long long mi = (st + ed) / 2;

        if (mi * mi == x)
            return mi;
        if (mi * mi > x)
        {
            ed = mi - 1;
        }
        else
        {
            ans = mi;
            st = mi + 1;
        }
    }

    return ans;
}