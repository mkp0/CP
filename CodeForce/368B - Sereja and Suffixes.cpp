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
    int n, q;
    cin >> n >> q;
    map<int, int> m;
    int arr[n];
    int co = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
        if (m[x] == 0)
        {
            co++;
        }
        m[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        arr[i] = co;
        if (m[x] == 1)
        {
            co--;
        }
        m[x]--;
    }

    while (q--)
    {
        int x;
        cin >> x;
        x--;
        cout << arr[x] << "\n";
    }
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