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
    string s;
    cin >> s;
    int n = s.size();

    int prefarr[n + 1] = {0};

    if (s[0] == '+')
        prefarr[1] = 1;
    else
        prefarr[1] = -1;

    for (int i = 2; i <= n; i++)
    {
        if (s[i - 1] == '+')
            prefarr[i] = prefarr[i - 1] + 1;
        else
            prefarr[i] = prefarr[i - 1] - 1;
    }

    ll res = 0;
    int i = 1;
    for (int k = 0;; k++)
    {
        int cur = k;
        bool ok = true;

        for (; i <= n; i++)
        {
            if (cur + prefarr[i] < 0)
            {
                ok = false;
                break;
            }
        }
        if (i > n)
            i--;

        res += i;

        if (ok)
            break;
    }
    cout << res << endl;
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