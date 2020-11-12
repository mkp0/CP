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

// BS binary Search , subStr Substring , mrg Merge,SOE sieve of Era,permutate PermutationOfString ,graphi GraphIntialzation , graphBFS Graph BFS ,graphDFS graph DFS,exdGCD ExtendedGCD,nCR with Factorial ,axbyn ax+by=n

/* I am gonna be the King of the Pirates */

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int i = 0, j = 0;
    int c = 0, co = 0, po = k + 1, r = 0;
    while ((i < n) && (j < n))
    {
        if (s[i] == 'M')
        {
            if (s[j] == 'I')
            {
                if (i < j)
                {
                    for (int k = i; k < j; k++)
                    {
                        if (s[k] == ':')
                            c++;
                    }
                }
                else if (i > j)
                {
                    for (int k = j; k < i; k++)
                    {
                        if (s[k] == ':')
                            c++;
                    }
                }
                r = po - abs(i - j) - c;
                if (r > 0)
                {
                    co++;
                    i++, j++;
                    c = 0;
                }
                else
                {
                    if (i > j)
                    {
                        j++;
                    }
                    else
                    {
                        i++;
                    }
                    c = 0;
                }
            }

            else if (s[j] == 'X')
            {
                i = j;
                i++, j++;
                c = 0;
            }
            else
            {
                j++;
            }
        }
        else if (s[i] == 'X')
        {
            j = i;
            i++, j++;
            c = 0;
        }
        else
        {
            i++;
        }
    }
    cout << co << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}