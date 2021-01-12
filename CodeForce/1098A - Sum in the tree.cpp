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

//stringMul String Multiplication ,  trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    vector<int> g[n];
    vector<int> arr(n);
    vector<int> par(n, -1);
    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp--;
        par[i] = temp;
        g[temp].pb(i);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int mini = INT_MAX;
            bool ok = true;
            for (auto x : g[i])
            {
                ok = false;
                mini = min(mini, arr[x]);
            }

            int pare = arr[par[i]];
            if (ok)
            {
                arr[i] = pare;
                continue;
            }
            if (mini - pare >= 0)
                arr[i] = mini;
            else
            {
                cout << "-1"
                     << "\n";
                return;
            }
        }
    }

    ll ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        // cout << arr[i] << " ";
        ans += (arr[i] - arr[par[i]]);
    }
    cout << ans << "\n";
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