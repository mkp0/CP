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
    int cnt2 = 0;
    int cnt4 = 0;
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    for (auto x : m)
    {
        cnt2 += x.second / 2;
        cnt4 += x.second / 4;
    }

    int q;
    cin >> q;

    while (q--)
    {
        char x;
        int v;
        cin >> x >> v;

        cnt2 -= m[v] / 2;
        cnt4 -= m[v] / 4;
        if (x == '+')
        {
            m[v]++;
        }
        else
        {
            m[v]--;
        }
        cnt2 += m[v] / 2;
        cnt4 += m[v] / 4;
        if (cnt4 >= 1 && cnt2 >= 4)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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