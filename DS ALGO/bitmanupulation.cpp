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

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b & 1)
        return power(a, b / 2) * power(a, b / 2) * a;
    else
        return power(a, b / 2) * power(a, b / 2);
}

int getithbit(int n, int i)
{
    if (n & (1 << (i - 1)))
        return 1;
    return 0;
}

int setithbit(int n, int i)
{
    n = n | (1 << (i - 1));
    return n;
}

int clearithbit(int n, int i)
{
    n = n & ~(1 << (i - 1));
    return n;
}

int updateithbit(int n, int i, int val)
{
    if (val == 0)
        return clearithbit(n, i);
    else
        return setithbit(n, i);
}

int clearlastibits(int n, int i)
{
    return n & (-1 << i);
}

int clearrangeitoj(int n, int i, int j)
{
    int one = (-1 << i);
    int two =
}

void solve()
{
    int a, b;
    cin >> a >> b;

    // cout << gcd(a, b);
    // cout << power(a, b);
    // cout << getithbit(a, b);
    // cout << setithbit(a, b) << endl;
    // cout << clearithbit(a, b) << endl;
    // cout << updateithbit(a, b, 0) << endl;
    // cout << clearlastibits(a, b) << endl;
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