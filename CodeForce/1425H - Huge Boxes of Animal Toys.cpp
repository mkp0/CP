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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 && d == 0)
    {
        if (b % 2 == 1)
        {
            cout << "Tidak Ya Tidak Tidak" << endl;
        }
        else
        {
            cout << "Tidak Tidak Ya Tidak" << endl;
        }
    }
    else if (c == 0 && b == 0)
    {
        if (a % 2 == 1)
        {
            cout << "Ya Tidak Tidak Tidak" << endl;
        }
        else
        {
            cout << "Tidak Tidak Tidak Ya" << endl;
        }
    }
    else
    {
        if ((a + b) % 2 == 1)
        {
            cout << "Ya Ya Tidak Tidak" << endl;
        }
        else
        {
            cout << "Tidak Tidak Ya Ya" << endl;
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