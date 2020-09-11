#include <bits/stdc++.h>

using namespace std;

long long func(long long n, long long k)
{
    if (n == k)
    {
        return 1;
    }
    long long ans = 1;
    k = min(k, n - k);

    for (long long i = 0; i < k; i++)
    {
        ans = ans * (n - i) / (i + 1);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << func(n - 1, n - k) << endl;
    }
    return 0;
}