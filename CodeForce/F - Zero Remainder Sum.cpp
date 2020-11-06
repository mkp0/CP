#include <bits/stdc++.h>

#define ll long long
#define pi (3.141592653589)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mini(a, b, c) min(c, min(a, b))
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define MOD 1e9 + 7
#define inf 1e9
using namespace std;
template <typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

int n, m, k;
int a[70][70];

int dp[71][71][71][71];

int fun(int i, int j, int cnt, int sum)
{
    if (cnt >= (m / 2))
        return -inf;
    if (i == n)
    {
        if (sum == 0)
            return 0;
        return -inf;
    }
    if (j == m)
        return -inf;
    if (dp[i][j][cnt][sum] != -1)
        return dp[i][j][cnt][sum];
    int ans = -inf;
    int ns = (sum + a[i][j]) % k;
    ans = max({ans, a[i][j] + fun(i, j + 1, cnt + 1, ns), fun(i, j + 1, cnt, sum)});

    ans = max({ans, fun(i + 1, 0, 0, sum), a[i][j] + fun(i + 1, 0, 0, ns)});
    return dp[i][j][cnt][sum] = ans;
}

void solve()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    memset(dp, -1, sizeof(dp));

    int ans = fun(0, 0, 0, 0);
    if (ans < 0)
        ans = 0;
    cout << ans << "\n";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}