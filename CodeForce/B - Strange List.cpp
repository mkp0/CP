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
    ll n, x;
    cin >> n >> x;
    ll arr[n];

    ll su = 0;

    bool is = true;
    ll times = LLONG_MAX;

    int ind = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        ll temp = arr[i];

        ll co = 0;

        while (temp % x == 0 && co < times)
        {
            co++;
            temp /= x;
        }
        if (co < times)
        {
            ind = i;
            times = co;
        }
    }

    for (int i = 0; i < n; i++)
    {
        su += arr[i];

        if (arr[i] % x == 0)
        {
            if (i < ind)
            {
                su += arr[i] * (times + 1);
            }
            else
            {
                su += arr[i] * (times);
            }
        }
    }

    cout << su << endl;
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