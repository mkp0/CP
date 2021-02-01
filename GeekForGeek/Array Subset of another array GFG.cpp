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
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        for (; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                if (i == m - 1)
                {
                    cout << "YES\n";
                    return;
                }
                break;
            }
        }
    }

    cout << "NO\n";
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