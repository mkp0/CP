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
    int a[n], b[n];

    int sa = 0, sb = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sa += a[i];
    }

    int diff = 0, comm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] == 1 && b[i] == 0)
        {
            diff++;
        }
        else if (a[i] == 0 && b[i] == 1)
        {
            comm++;
        }
        sb += b[i];
    }

    if (sb >= sa && diff == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        if (sa > sb)
        {
            cout << 1 << endl;
        }
        else
        {

            if (sb == sa)
            {
                cout << 2 << endl;
                return;
            }
            // cout << comm << " " << diff << endl;
            cout << comm / diff + 1 << endl;
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
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}