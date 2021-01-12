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

    int arr[n];
    int vis[2 * n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 2 * n)
        {
            cout << -1 << "\n";
            return;
        }
        else
        {
            if (vis[arr[i]])
            {
                cout << -1 << "\n";
                return;
            }
            vis[arr[i]]++;
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool is = false;

        int temp = arr[i];
        ans.pb(temp);
        for (int j = temp; j <= 2 * n; j++)
        {
            if (!vis[j])
            {
                vis[j] = 1;
                ans.pb(j);
                is = true;
                break;
            }
        }
        if (!is)
        {
            cout << "-1"
                 << "\n";
            return;
        }
    }

    for (auto x : ans)
        cout << x << " ";
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