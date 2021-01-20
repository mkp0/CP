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
    vector<int> arr(2 * n);
    for (auto &x : arr)
        cin >> x;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < (2 * n) - 1; i++)
    {
        int su = arr[i] + arr[(2 * n) - 1];
        vector<int> res;
        multiset<int> ms;
        for (auto x : arr)
            ms.insert(x);

        for (int i = 0; i < n; i++)
        {

            auto it = ms.end();
            it--;
            int lar = *it;
            ms.erase(it);
            int sm = su - lar;
            if (ms.find(sm) == ms.end())
            {
                break;
            }
            res.pb(lar);
            res.pb(sm);
            su = max(lar, sm);
            ms.erase(ms.find(sm));
        }
        if (res.size() == 2 * n)
        {
            cout << "YES\n";
            cout << arr[2 * n - 1] + arr[i] << "\n--";
            for (int j = 0; j < 2 * n; j += 2)
            {
                cout << res[j] << " " << res[j + 1] << "\n";
            }
            return;
        }
    }

    cout << "NO\n";
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