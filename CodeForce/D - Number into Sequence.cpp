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

// trie trie, zalgo Z-Algorithm, segTree Segmentation Tree, BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

map<ll, ll> fact;

void primeFactors(ll n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        fact[2]++;
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            fact[i]++;
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        fact[n]++;
}

void solve()
{
    ll n;
    fact.clear();
    cin >> n;
    primeFactors(n);

    // for (auto x : fact)
    // {
    //     cout << x.second << " " << x.first << endl;
    // }

    ll ans = INT_MIN, val;

    for (auto x : fact)
    {
        if (x.second > ans)
        {
            ans = x.second;
            val = x.first;
        }
    }

    ll other = val;
    for (auto x : fact)
    {
        if (x.first != val)
        {
            while (x.second--)
            {
                other *= x.first;
            }
        }
    }

    cout << ans << endl;
    for (ll i = 1; i < ans; i++)
    {
        cout << val << " ";
    }
    cout << other << endl;
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