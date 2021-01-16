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

    int o = 0;
    int e = 0;

    int st = 0;
    int ed = n - 1;

    vector<int> v;

    while (st < ed)
    {
        if (s[st] == '(' && s[ed] == ')')
        {
            v.pb(st + 1);
            v.pb(ed + 1);
            st++;
            ed--;
        }
        else if (s[st] == '(' && s[ed] == '(')
        {
            ed--;
        }
        else if (s[st] == ')' && s[ed] == '(')
        {
            st++;
            ed--;
        }
        else
        {
            st++;
        }
    }

    if (v.size() == 0)
    {
        cout << v.size() << "\n";
    }
    else
    {
        sort(v.begin(), v.end());
        cout << 1 << "\n";
        cout << v.size() << "\n";
        for (auto x : v)
            cout << x << " ";
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