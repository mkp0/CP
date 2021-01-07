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

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mn = INT_MAX;
    int ma = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == -1 && arr[i - 1] >= 0)
        {
            mn = min(mn, arr[i - 1]);
            ma = max(ma, arr[i - 1]);
        }
        if (i < n - 1 && arr[i] == -1 && arr[i + 1] >= 0)
        {
            mn = min(mn, arr[i + 1]);
            ma = max(ma, arr[i + 1]);
        }
    }

    // cout << mn << ma << endl;

    int mid = (mn + ma) / 2;

    if (arr[0] == -1)
        arr[0] = mid;

    int maxd = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = mid;
        }
        maxd = max(maxd, abs(arr[i] - arr[i - 1]));
    }

    cout << maxd << " " << mid << endl;
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