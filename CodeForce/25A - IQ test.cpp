#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    long long even = 0, le, lo;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
            le = i + 1;
        }
        else
        {
            lo = i + 1;
        }
    }

    if (even == 1)
    {
        cout << le;
    }
    else
    {
        cout << lo;
    }

    return 0;
}