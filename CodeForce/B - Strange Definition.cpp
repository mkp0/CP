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
const int N = 1e3 + 5;
int primes[N];
vector<ll> pr;
void sieve()
{
    for (ll i = 2; i < N; i++)
    {
        if (primes[i] == 0)
        {
            pr.pb(i);
            for (ll j = i * i; j < N; j += i)
            {
                primes[j] = 1;
            }
        }
        primes[i] ^= 1;
    }
}

void solve()
{
    ll n;
    cin >> n;

    map<ll, ll> m;

    for (ll j = 0; j < n; j++)
    {
        ll val;
        cin >> val;
        ll temp = 1;

        for (auto x : pr)
        {
            if (x * x > val)
                break;
            if (val % x)
                continue;
            ll co = 0;
            while (val % x == 0)
            {
                co++;
                val /= x;
            }
            if (co % 2)
            {
                temp *= x;
            }
        }
        temp *= val;
        m[temp]++;
    }

    ll ans0 = 0;
    ll ans1 = 0;

    for (auto x : m)
    {
        ans0 = max(ans0, x.second);
    }
    ans1 = m[1];
    m.erase(1);

    for (auto x : m)
    {
        if (x.second % 2 == 0)
        {
            ans1 += x.second;
        }
    }

    ans1 = max(ans1, ans0);

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++)
    {
        ll w;
        cin >> w;
        if (w == 0)
        {
            cout << ans0 << endl;
        }
        else
        {
            cout << ans1 << endl;
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
    ll t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}