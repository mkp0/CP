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

ll prefsum[110001];
ll arr[110001];
ll n, q;

map<ll, ll> m;

void preprocess(ll st, ll ed)
{
    if (st > ed)
        return;

    ll val = prefsum[ed] - prefsum[st - 1];
    m[val]++;

    if (arr[st] == arr[ed])
    {
        return;
    }

    ll mid = (arr[st] + arr[ed]) / 2;
    // cout << mid << " ";
    ll mi = upper_bound(arr + 1, arr + n + 1, mid) - arr;
    preprocess(st, mi - 1);
    preprocess(mi, ed);
}

void solve()
{
    m.clear();
    cin >> n >> q;
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    sort(arr + 1, arr + n + 1);

    //prefsum
    for (int i = 1; i <= n; i++)
        prefsum[i] = prefsum[i - 1] + arr[i];

    //preprocess

    preprocess(1, n);

    //checking query
    while (q--)
    {
        int x;
        cin >> x;
        //occurence of element
        if (m[x])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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