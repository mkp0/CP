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
    vector<int> v(n + 1, 0);
    set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        s.erase(v[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0 && (s.find(i) != s.end()))
        {
            for (auto x : s)
            {
                if (x != i)
                {
                    v[i] = x;
                    break;
                }
            }
            s.erase(v[i]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i] != 0)
            cout << v[i];
        else
        {
            cout << *s.begin();
            s.erase(*s.begin());
        }
        cout << " ";
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