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
    int arr[n];
    int ma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ma = max(ma, arr[i]);
    }

    if (ma == 0)
    {
        ma = 1;
    }

    char mat[n + 1][ma];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < ma; j++)
        {
            mat[i][j] = 'a';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < arr[i - 1]; j++)
        {
            mat[i][j] = mat[i - 1][j];
        }
        for (int j = arr[i - 1]; j < ma; j++)
        {
            if (mat[i - 1][j] == 'a')
            {
                mat[i][j] = 'b';
            }
            else
            {
                mat[i][j] = 'a';
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < ma; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
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