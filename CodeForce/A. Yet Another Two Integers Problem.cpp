#include <bits/stdc++.h>

using namespace std;

long long func(long long a, long long b)
{
    long long ans;
    if (a == b)
    {
        return 0;
    }
    else
    {
        ans = abs(a - b) / 10;
        if (abs(a - b) % 10 == 0)
        {
            return ans;
        }
        else
        {
            return ans + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << func(a, b) << endl;
    }
    return 0;
}