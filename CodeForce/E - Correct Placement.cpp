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

    vector<pair<pair<int, int>, int>> dim(n);

    int ans[n];

    for (int i = 0; i < n; i++)
    {
        ans[i] = -2;
        int x, y;
        cin >> x >> y;
        if (y > x)
            swap(x, y);
        //incresing x and decresing (-y) if(xj == xi)
        dim[i] = {{x, -y}, i};
    }

    int mini = INT_MAX, ind = -1;
    sort(dim.begin(), dim.end());

   
    for (int i = 0; i < n; i++)
    {
        int y = -dim[i].first.second;
        int id = dim[i].second;

        if (y > mini)
        {
            ans[id] = ind;
        }
        else if (y < mini)
        {
            mini = y;
            ind = id;
        }
    }

    for (auto x : ans)
    {
        cout << x + 1 << " ";
    }
    cout << endl;
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