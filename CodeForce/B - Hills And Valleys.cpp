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
vector<int> v;
int n;

int check(int i)
{
    if (i == 0 || i == n - 1)
        return 0;
    if (v[i] > v[i - 1] && v[i] > v[i + 1])
        return 1;
    if (v[i] < v[i - 1] && v[i] < v[i + 1])
        return 1;
    return 0;
}

void solve()
{
    v.clear();
    cin >> n;

    v.resize(n);
    for (auto &x : v)
        cin >> x;

    int co = 0;
    for (int i = 1; i < n - 1; i++)
    {
        co += check(i);
    }

    int ans = co;

    for (int i = 1; i < n - 1; i++)
    {
        int temp = check(i) + check(i - 1) + check(i + 1);

        int arri = v[i];

        v[i] = v[i + 1];
        int temp1 = check(i) + check(i - 1) + check(i + 1);

        v[i] = v[i - 1];
        int temp2 = check(i) + check(i - 1) + check(i + 1);

        ans = min({ans, co - temp + temp1, co - temp + temp2});
        v[i] = arri;
    }

    cout << ans << endl;
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