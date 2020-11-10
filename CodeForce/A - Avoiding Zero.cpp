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

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    int sum = 0;
    for (auto &x : arr)
    {
        cin >> x;
        sum += x;
    }

    if (sum == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if (sum > 0)
        {
            sort(arr.begin(), arr.end(), greater<int>());
            for (auto x : arr)
            {
                cout << x << " ";
            }
        }
        else
        {
            sort(arr.begin(), arr.end());
            for (auto x : arr)
            {
                cout << x << " ";
            }
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
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}