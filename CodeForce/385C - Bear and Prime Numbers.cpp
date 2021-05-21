#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int N = 10000001;
    vector<int> cnt(N, 0);  // cnt element
    vector<ll> prefs(N, 0); // prefix sum
    vector<ll> sieve(N, 0); // sieve

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
        maxi = max(maxi, x);
    }
    for (int i = 2; i < N; i++)
    {
        prefs[i] = prefs[i - 1];
        if (!sieve[i])
        {
            for (int j = i; j <= maxi; j += i)
            {
                prefs[i] += cnt[j];
                sieve[j] = 1; //cause only primes allowed in [l,r]
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << prefs[min(r, N - 1)] - prefs[min(N - 1, l - 1)] << endl;
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}