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
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> m;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i == 0)
        {
            v.push_back(temp);
            m[temp]++;
            j++;
        }
        else
        {
            if (v[j - 1] != temp)
            {
                v.push_back(temp);
                m[temp]++;
                j++;
            }
        }
    }

    int t1 = INT_MAX;
    for (auto x : m)
    {
        if (t1 > x.second)
        {
            t1 = x.second;
        }
    }

    int a1, a2 = INT_MAX, a3 = INT_MAX;
    a1 = t1 + 1;
    a2 = m[v.front()];
    a3 = m[v.back()];

    if (v.front() == v.back())
    {
        a2--;
        a3--;
    }

    cout << min({a1, a2, a3}) << endl;
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