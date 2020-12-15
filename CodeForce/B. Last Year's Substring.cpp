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
    string s;
    cin >> s;

    if (n < 4)
    {
        cout << "NO" << endl;
        return;
    }
    string temp = "2020";
    int i = 0;

    for (int x = 0; x < 4; x++)
    {
        if (s[i] == temp[i])
        {
            i++;
        }
        else
        {
            break;
        }
    }
    int j = 3, i1 = 0;
    for (int x = n - 1; x >= n - 4; x--)
    {
        if (s[x] == temp[j])
        {
            j--;
            i1++;
        }
        else
        {
            break;
        }
    }
    // cout << i << " " << i1 << " ";
    if (i == 4 || i1 == 4 || (i + i1) >= 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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