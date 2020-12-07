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
#define MOD 1e9 + 7
using namespace std;

// trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1 || n == 2)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = 0;

    ll a = INT_MIN;

    for (int i = n - 2; i >= 0; i--)
    {
        ans += abs(arr[i] - arr[i + 1]);
        a = max(a, abs(arr[i] - arr[i + 1]));
        ll su;
        // cout << arr[i] - arr[i + 1] << " ";
        if (i <= n - 3)
        {
            ll x = abs(arr[i] - arr[i + 1]);
            ll z = abs(arr[i] - arr[i + 2]);
            ll y = abs(arr[i + 1] - arr[i + 2]);
            // cout << x << "y " << y << "z " << z << " ";
            ll su = x + y - z;
            a = max({abs(a), abs(x), abs(su)});
        }
    }

    cout << ans - a << endl;
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