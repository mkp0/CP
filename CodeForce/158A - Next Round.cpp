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

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end(), greater<int>());

    int ans = min(k, n);

    if (a[k - 1] > 0)
    {
        for (int i = k; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] > 0)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
    }
    cout << ans << endl;
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
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}