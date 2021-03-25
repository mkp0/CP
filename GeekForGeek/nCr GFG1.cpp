int mod = 1e9 + 7;
long long po(long long a, long long b)
{
    long long x = 1;

    a %= mod;
    while (b)
    {
        if (b & 1)
        {
            x = x * a % mod;
        }
        a = a * a % mod;
        b /= 2;
    }
    return x;
}

long long modInverse(long long A)
{
    return po(A, mod - 2);
}

class Solution
{
public:
    long int ncr(int n, int r)
    {
        if (r > n)
            return 0;

        long long dp[n + 1];
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1] * i % mod;
        }

        long long mul = dp[r] * dp[n - r] % mod;
        mul = dp[n] * modInverse(mul) % mod;
        return mul;
    }
};