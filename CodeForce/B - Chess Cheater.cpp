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
    int n, k;
    cin >> n >> k;

    int prev = -1e9;
    int ans = 0, lose = 0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'W')
        {
            ans++;
            if (i == prev)
            {
                ans++;
                continue;
            }
            v.push_back(i - prev - 1);
            prev = i;
        }
        else
        {
            lose++;
        }
    }
    v.push_back(1e9);
    sort(v.begin(), v.end());
    k = min(lose, k);
    if (k == lose)
    {
        cout << n * 2 - 1 << endl;
    }
    else if (ans == 0 && k > 0)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        for (auto x : v)
        {
            if (k >= x)
            {
                ans += 2 * x + 1;
                k -= x;
            }
            else
            {
                ans += 2 * k;
                break;
            }
        }
        cout << ans << endl;
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