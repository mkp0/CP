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
    int n, co;
    int dp[10] = {0};

    cin >> n;
    co = n;
    if (n < 10)
    {
        cout << n << endl;
    }
    else
    {
        int pos = 9;
        while (n >= 10)
        {
            dp[pos] = 1;
            n -= pos;
            pos--;
        }

        if (dp[n] == 0)
        {
            dp[n] = 1;
            n = 0;
        }
        if (n > 0)
        {
            for (int i = pos; i >= 1; i--)
            {
                dp[pos] = 1;
                n -= pos;
                if (dp[n] == 0)
                {
                    dp[n] = 1;
                    break;
                }
                pos--;
            }
        }
        int temp = 0;
        for (int i = 1; i <= 9; i++)
        {
            if (dp[i] == 1)
            {
                temp += i;
            }
        }

        if (temp != co)
        {
            cout << -1 << endl;
            return;
        }

        for (int i = 1; i <= 9; i++)
        {
            if (dp[i] == 1)
                cout << i;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}