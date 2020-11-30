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
int arr[10000];
void func()
{
    ll x = 2;
    for (int i = 0; i < 10000; i++)
    {
        arr[i] = x * 2 - 1;
        x *= 2;
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < 1000; i++)
    {
        // cout << arr[i] << " ";
        if (n % arr[i] == 0)
        {
            cout << n / arr[i] << endl;
            return;
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
    func();
    while (t--)
    {
        solve();
    }
    return 0;
}