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

    int temp = n;

    if (n <= 8)
    {
        int ans = n - 3;
        while (temp != 1)
        {
            ans++;
            temp = ceil(temp / 2.0);
        }
        cout << ans << endl;
        temp = n;

        for (int i = 3; i < n; i++)
        {
            cout << i << " " << n << endl;
        }
        while (temp != 1)
        {
            cout << n << " " << 2 << endl;
            temp = ceil(temp / 2.0);
        }
    }
    else
    {
        int ans = n - 5;
        while (temp != 1)
        {
            ans++;
            temp = ceil(temp / 8.0);
        }
        ans += 4;

        cout << ans << endl;

        temp = n;

        for (int i = 3; i < n; i++)
        {
            if (i == 4 || i == 8)
                continue;
            cout << i << " " << n << endl;
        }

        while (temp != 1)
        {
            cout << n << " " << 8 << endl;
            temp = ceil(temp / 8.0);
        }

        cout << 8 << " " << 4 << endl;
        cout << 8 << " " << 4 << endl;
        cout << 4 << " " << 2 << endl;
        cout << 4 << " " << 2 << endl;
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