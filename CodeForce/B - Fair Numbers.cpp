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

bool issafe(ll num)
{
    int digi[10] = {0};

    ll temp = num;

    while (temp)
    {
        if (temp % 10 == 0)
        {
            temp /= 10;
            continue;
        }
        digi[temp % 10]++;
        temp /= 10;
    }

    for (int i = 1; i <= 9; i++)
    {
        if (digi[i])
        {
            if (num % i)
            {
                return false;
            }
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    for (;; n++)
    {
        if (issafe(n))
        {
            cout << n << endl;
            return;
        }
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