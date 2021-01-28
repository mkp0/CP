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
    int a, b, k;
    cin >> a >> b >> k;

    vector<int> A(a + 1, 0);
    vector<int> A1;
    vector<int> B(b + 1, 0);
    vector<int> B1;

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        A1.pb(x);
        A[x]++;
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        B1.pb(x);
        B[x]++;
    }

    ll ans = 0;

    for (int i = 0; i < k - 1; i++)
    {
        int x = A1[i];
        int y = B1[i];

        A[x]--;
        B[y]--;

        int temp = (k - i - (A[x] + B[y]) - 1);
        if (temp > 0)
        {
            ans += temp;
        }
    }
    cout << ans << " \n";
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