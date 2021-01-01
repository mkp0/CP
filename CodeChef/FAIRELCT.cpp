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
    int n1, n2;
    cin >> n1 >> n2;

    int a[n1], b[n2];
    ll su1 = 0;
    ll su2 = 0;

    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
        su1 += a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
        su2 += b[i];
    }

    sort(a, a + n1);
    sort(b, b + n2, greater<int>());

    if (su1 > su2)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        for (int i = 0; i < min(n1, n2); i++)
        {
            int temp = b[i] - a[i];
            if (temp <= 0)
            {
                cout << -1 << endl;
                return;
            }
            su1 += temp;
            su2 -= temp;
            if (su1 > su2)
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
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