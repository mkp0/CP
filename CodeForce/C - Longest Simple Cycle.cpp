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
    int len[n];
    int st[n];
    int ed[n];

    for (int i = 0; i < n; i++)
        cin >> len[i];

    for (int i = 0; i < n; i++)
        cin >> st[i];

    for (int i = 0; i < n; i++)
        cin >> ed[i];

    vector<ll> A(n, 0);

    for (int i = 1; i < n; i++)
    {
        int diff = abs(st[i] - ed[i]);
        int diff1 = abs(st[i - 1] - ed[i - 1]);

        A[i] = diff + len[i] + 1;
        if (A[i - 1] && (st[i] != ed[i]))
        {
            A[i] = max(A[i], A[i] + A[i - 1] - 2 * diff);
        }
    }

    cout << *max_element(A.begin(), A.end()) << " \n";
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