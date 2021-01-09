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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> op(n, 0);

    for (auto &x : arr)
        cin >> x;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        x--;
        op[x] = 1;
        if (x + 1 < n && op[x + 1] != 1)
        {
            op[x + 1] = 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int st = i;
        int ed = i;
        while (op[ed] == 1 && ed < n)
        {
            ed++;
            if (ed < n && op[ed] == 2)
            {
                ed++;
                break;
            }
        }
        // cout << st << " " << ed << "x";
        sort(arr.begin() + st, arr.begin() + ed);

        // cout << st << " " << ed << " x";
        if (i > 0)
        {
            if (arr[st] < arr[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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