bool isPowerofTwo(long long n)
{

    return n && (!(n & (n - 1)));
}