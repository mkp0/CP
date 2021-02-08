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
    int n, c;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];

    bool ok = false;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i <= k; i++)
    {
        if (ok)
        {
            break;
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                arr[j] += 1;
                c = j;
                break;
            }
            if (j == n - 2 && arr[j + 1] <= arr[j])
            {
                ok = 1;
            }
        }
    }

    if (ok || n == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << c + 1 << "\n";
    }

    return;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}