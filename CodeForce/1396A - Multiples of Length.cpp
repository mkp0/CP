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
    ll n;
    cin >> n;

    vll arr(n);

    for (auto &x : arr)
        cin >> x;

    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
        cout << -arr[0] << endl;
        cout << 1 << " " << 1 << endl;
        cout << arr[0] << endl;
        cout << 1 << " " << 1 << endl;
        cout << -arr[0] << endl;
        return;
    }

    cout << n << " " << n << endl;
    cout << -arr[n - 1] << endl;

    cout << 1 << " " << n - 1 << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] * n - arr[i] << " ";
    }
    cout << endl;
    cout << 1 << " " << n << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << -arr[i] * n << " ";
    }
    cout << 0 << endl;
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