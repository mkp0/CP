#include <bits/stdc++.h>
using namespace std;

map<long long, long long> memo;

long long Exchange(long long n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (memo[n] != 0)
    {
        return memo[n];
    }

    long long x = Exchange(n / 2) + Exchange(n / 3) + Exchange(n / 4);

    memo[n] = max(x, n);

    return memo[n];
}

int main()
{
    int t;
    long long n;
    while (scanf("%lld", &n) == 1)
    {
        printf("%lld\n", Exchange(n));
    }
    return 0;
}