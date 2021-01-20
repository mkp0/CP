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
const int N = 1e5;
// store if prime or not
ll primes[N];
//stores the prime in pr
void sieve()
{
    for (ll i = 2; i < N; i++)
    {
        if (primes[i] == 0)
        {
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

    ll a, b;
    a = 1 + n;

    while (!primes[a])
    {
        a++;
    }
    b = a + n;
    while (!primes[b])
    {
        b++;
    }

    cout << a * b << endl;
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
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}