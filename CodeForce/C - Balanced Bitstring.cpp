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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k > n)
    {
        cout << "NO" << endl;
        return;
    }

    vector<char> ans(k, '?');

    for (int i = 0; i < k; i++)
    {
        bool is = true;
        int val;
        for (int j = i; j < n; j += k)
        {
            if (s[j] == '?')
            {
                continue;
            }
            else if (is)
            {
                val = s[j];
                is = !is;
            }
            else
            {
                if (s[j] != val)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        if (!is)
        {
            ans[i] = val;
        }
        else
        {
            ans[i] = '?';
        }
    }

    int bf = 0, q = 0;

    for (int i = 0; i < k; i++)
    {
        if (ans[i] == '?')
        {
            q++;
        }
        else if (ans[i] == '1')
        {
            bf++;
        }
        else
        {
            bf--;
        }
    }

    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    if (abs(bf) <= q)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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