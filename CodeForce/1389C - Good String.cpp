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

    int ans = 0;

    for (char i = '0'; i <= '9'; i++)
    {
        for (char j = '0'; j <= '9'; j++)
        {
            int temp = 0;
            int act = 0;
            for (int k = 0; k < n; k++)
            {
                if (act == 0)
                {
                    if (s[k] == i)
                    {
                        temp++;
                        act = 1;
                    }
                }
                else
                {
                    if (s[k] == j)
                    {
                        temp++;
                        act = 0;
                    }
                }
            }
            if (temp % 2 && i != j)
                temp--;
            ans = max(temp, ans);
        }
    }

    cout << n - ans << endl;
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