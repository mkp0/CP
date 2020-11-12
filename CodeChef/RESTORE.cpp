#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
vi p;
void sieve()
{
    p.pb(2);
    for (int i = 3; i < 4000000; i++)
    {
        int temp = 0;
        for (int j = 0; p[j] * p[j] <= i; j++)
        {
            if (i % p[j] == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            p.pb(i);
    }
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b[n] = {0};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[arr[i] - 1] == 0)
        {
            b[arr[i] - 1] = p[k];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[arr[i] - 1] << " ";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}