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
    int n;
    cin >> n;
    int arr[n + 1];
    int ans[n + 1] = {0};
    bool ok = true;

    cin >> arr[1];
    ans[arr[1]] = 1;

    for (int i = 2; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] < arr[i - 1])
            ok = false;
        if (arr[i] != arr[i - 1])
        {
            ans[arr[i]] = 1;
        }
    }

    int pt = 1;

    if (!ok)
    {
        cout << "-1" << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ans[arr[i]] == 2)
        {
            while (ans[pt])
            {
                pt++;
            }
            if (arr[i] < pt)
            {
                cout << -1 << endl;
                return;
            }
            ans[pt] = 1;
            arr[i] = pt;
            pt++;
        }

        ans[arr[i]] = 2;
    }

    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            cout << "-1\n";
            return;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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