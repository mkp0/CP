#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define S second
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n <= 2)
    {
        cout << n << "\n";
        return;
    }
    int co = 0;
    int l1 = -1;
    int l2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == l1 && arr[i] == l2)
            continue;
        if (arr[i] == l2)
        {
            l1 = arr[i];
            co++;
        }
        else if (arr[i] == l1)
        {
            l2 = arr[i];
            co++;
        }
        else if (arr[i] != l1 && arr[i] != l2)
        {
            if (l1 != l2)
                l2 = -1;
            l1 = arr[i];
            co++;
        }
    }
    cout << co << "\n";
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}