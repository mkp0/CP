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
int n, h, l, r;
vector<int> arr;
int dp[2005][2005];

int func(int ind, int hr)
{
    if (ind >= n)
        return 0;

    if (dp[ind][hr] != -1)
        return dp[ind][hr];

    ll temp1 = (hr + arr[ind]) % h;

    ll temp2 = (hr + arr[ind] - 1) % h;

    if (temp1 >= l && temp1 <= r)
    {
        temp1 = 1 + func(ind + 1, temp1);
    }
    else
    {
        temp1 = func(ind + 1, temp1);
    }

    if (temp2 >= l && temp2 <= r)
    {
        temp2 = 1 + func(ind + 1, temp2);
    }
    else
    {
        temp2 = func(ind + 1, temp2);
    }

    dp[ind][hr] = max(temp1, temp2);

    return max(temp1, temp2);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> h >> l >> r;

    arr.resize(n);

    for (auto &x : arr)
        cin >> x;

    cout << func(0, 0);
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