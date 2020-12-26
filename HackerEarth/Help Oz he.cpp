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
    int arr[n], diff[n - 1];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        diff[i - 1] = abs(arr[i] - arr[i - 1]);
    }

    int gcd = 0;

    for (int i = 0; i < n - 1; i++)
    {
        gcd = __gcd(gcd, diff[i]);
    }

    vector<int> ans;
    for (int i = 1; i * i <= gcd; i++)
    {
        if (i == 1)
        {
            ans.push_back(gcd);
            continue;
        }
        if (gcd % i == 0)
        {
            ans.push_back(i);
            if (gcd / i != i)
            {
                ans.push_back(gcd / i);
            }
        }
    }

    sort(ans.begin(), ans.end());

    for (auto x : ans)
    {
        cout << x << " ";
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
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}