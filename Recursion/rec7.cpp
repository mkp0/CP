//Mutipication
#include <bits/stdc++.h>

using namespace std;

int mul(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int small = mul(m, n - 1);
    return m + small;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << mul(m, n);
}