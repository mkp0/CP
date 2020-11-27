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
    map<int, int> m, temp;
    int n, i = 0;
    cin >> n;
    vi arr(n);
    for (auto &x : arr)
    {
        cin >> x;
        if (m.find(x) == m.end())
        {
            m[x] = i - 0;
        }
        else
        {
            // cout << m[x] - temp[x] << " ";
            m[x] = max(m[x], i - temp[x]);
        }
        temp[x] = i + 1;
        i++;
    }
    vector<int> ans(n, INT_MAX);

    for (auto &x : m)
    {
        x.second = max(x.second, n - temp[x.first]);
    }

    for (auto x : m)
    {
        ans[x.second] = min(ans[x.second], x.first);
        // cout << x.first << " " << x.second << endl;
    }

    if (ans[0] == INT_MAX)
    {
        cout << -1 << " ";
    }
    else
    {
        cout << ans[0] << " ";
    }

    for (int i = 1; i < n; i++)
    {
        // cout << ans[i] << " ";
        ans[i] = min(ans[i], ans[i - 1]);
        if (ans[i] == INT_MAX)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << ans[i] << " ";
        }
    }

    cout << endl;
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