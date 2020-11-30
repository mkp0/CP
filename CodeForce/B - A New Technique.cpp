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
    int n, m;
    cin >> n >> m;
    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int p = 0;
    bool is = false;

    for (int j = 0; j < n; j++)
    {
        // cout << "hi";
        int temp;
        cin >> temp;
        // cout << temp << " -> ";
        for (; p < m; p++)
        {
            for (int i = 0; i < n; i++)
            {
                if (mat[i][p] == temp)
                {
                    is = true;
                    for (int k = 0; k < m; k++)
                    {
                        cout << mat[i][k] << " ";
                    }
                    cout << endl;
                    break;
                }
            }

            if (is)
            {
                break;
            }
        }
    }

    for (int j = 1; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
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