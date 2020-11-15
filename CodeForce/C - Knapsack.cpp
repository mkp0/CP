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
    ll n, w;
    cin >> n >> w;
    ll arr[n];
    ll midg = 0;
    ll mi = INT_MAX;
    ll hf = w / 2;
    if (w % 2 == 1)
    {
        hf = hf + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mi = min(arr[i], mi);
    }
    // if single element satisfy the given condition
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= hf && arr[i] <= w)
        {
            cout << 1 << endl;
            cout << i + 1 << endl;
            return;
        }
    }

    ll tot = 0;

    //mi is greater than w
    if (mi > w)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= hf)
        {
            tot += arr[i];
            v.push_back(i + 1);
        }
        if (tot >= hf)
        {
            break;
        }
    }

    if (tot < hf)
    {
        cout << -1 << endl;
        return;
    }

    cout << v.size() << endl;

    for (auto x : v)
    {
        cout << x << " ";
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
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}