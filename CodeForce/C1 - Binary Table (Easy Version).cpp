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
    char mat[n][m];
    int on = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == '1')
            {
                on++;
            }
        }
    }

    cout << 3 * on << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '1')
            {
                bool down = (i < n - 1);
                bool right = (j < m - 1);

                //1
                if (down && right)
                {
                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j + 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 + 1 << " " << j + 1 << " ";
                    cout << i + 1 + 1 << " " << j + 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j + 1 + 1 << " ";
                    cout << i + 1 + 1 << " " << j + 1 + 1 << " " << endl;
                }

                //2
                if (down && !right)
                {
                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j - 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 + 1 << " " << j + 1 << " ";
                    cout << i + 1 + 1 << " " << j - 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j - 1 + 1 << " ";
                    cout << i + 1 + 1 << " " << j - 1 + 1 << " " << endl;
                }

                //3
                if (!down && right)
                {
                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i - 1 + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j + 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i - 1 + 1 << " " << j + 1 << " ";
                    cout << i - 1 + 1 << " " << j + 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j + 1 + 1 << " ";
                    cout << i - 1 + 1 << " " << j + 1 + 1 << " " << endl;
                }

                //3
                if (!down && !right)
                {
                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i - 1 + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j - 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i - 1 + 1 << " " << j + 1 << " ";
                    cout << i - 1 + 1 << " " << j - 1 + 1 << " " << endl;

                    cout << i + 1 << " " << j + 1 << " ";
                    cout << i + 1 << " " << j - 1 + 1 << " ";
                    cout << i - 1 + 1 << " " << j - 1 + 1 << " " << endl;
                }
            }
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