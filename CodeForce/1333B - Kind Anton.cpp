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
    vi a(n), b(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    for (auto &x : b)
    {
        cin >> x;
    }

    if (a[0] != b[0])
    {
        cout << "NO" << endl;
        return;
    }
    bool pos = false, neg = false;
    if (a[0] > 0)
    {
        pos = true;
    }
    else if (a[0] < 0)
    {
        neg = true;
    }

    for (int i = 1; i < n; i++)
    {

        if (a[i] == b[i])
        {
        }

        if (a[i] < b[i])
        {
            if (pos)
            {
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (a[i] > b[i])
        {
            if (neg)
            {
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }

        if (a[i] > 0)
        {
            pos = true;
        }
        else if (a[i] < 0)
        {
            neg = true;
        }
    }

    cout << "YES" << endl;
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