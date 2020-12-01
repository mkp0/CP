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

bool notshorted(vector<ll> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    ll n, x, l = 1, lt = 1;
    cin >> n >> x;
    vll arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    int co = 0;

    while (notshorted(arr))
    {
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= x)
            {
                pos++;
            }
            else
            {
                break;
            }
        }
        if (pos == n)
        {
            cout << -1 << endl;
            return;
        }
        swap(arr[pos], x);
        co++;
        // cout << x << pos << " ";
    }

    cout << co << endl;

    /*Complex part */
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