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

void solve()
{
    int n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;

    int arr1[26] = {0};
    int arr2[26] = {0};

    for (int i = 0; i < n; i++)
    {
        arr1[s1[i] - 'a']++;
        arr2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        int mi = min(arr1[i], arr2[i]);
        arr1[i] -= mi;
        arr2[i] -= mi;
    }

    int carry = 0;

    for (int i = 0; i < 26; i++)
    {
        if ((arr1[i] + carry) >= k)
        {
            carry += arr1[i];
        }
        else if (arr1[i] > 0)
        {
            cout << "No" << endl;
            return;
        }

        if (carry < arr2[i])
        {
            cout << "No" << endl;
            return;
        }
        else
        {
            carry -= arr2[i];
            if (carry % k != 0)
            {
                cout << "No" << endl;
                return;
            }
        }

        // cout << carry << " ";
        // cout << arr1[i] << "x" << arr2[i] << "-";
    }

    cout << "Yes" << endl;
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