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

int dp[100001][5];
int n, k, z;

int func(int arr[], int n1, int k1, int z1)
{
    if (n1 >= n || n1 < 0)
        return 0;
    if (dp[n1][z1] != -1)
        return dp[n1][z1];

    int temp1 = arr[n1];
    int temp2 = arr[n1];
    if (k1 && n1 < n - 1)
    {
        temp1 = arr[n1] + func(arr, n1 + 1, k1 - 1, min(z1, k1 - 1));
    }
    if (z1 && n1 > 0)
    {
        temp2 = arr[n1] + func(arr, n1 - 1, k1 - 1, z1 - 1);
    }

    dp[n1][z1] = max(temp1, temp2);

    return max(temp1, temp2);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> k >> z;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << func(arr, 0, k, z) << "\n";
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