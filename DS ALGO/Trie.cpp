#include <bits/stdc++.h>

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
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
#define inf 1e9
#define loop(i, a, b, c) for (int i = (a); i <= (b); i = i + (c))
using namespace std;

/* I am gonna be the King of the Pirates */
#define sz 27

struct Vertex
{

    long totalWord;
    long totalPrefix;
    Vertex *edges[sz];
};

Vertex *createNode()
{
    Vertex *v;
    long i;

    v = new Vertex;

    v->totalPrefix = 0;
    v->totalWord = 0;

    for (i = 0; i < 26; i++)
        v->edges[i] = NULL;

    return v;
}

void insertWord(Vertex *ver, string str, long len, long k)
{
    if (len == k)
    {
        ver->totalWord++;
        ver->totalPrefix++;
        return;
    }

    ver->totalPrefix++;

    if (!ver->edges[str[k] - 'a'])
    {

        ver->edges[str[k] - 'a'] = createNode();
    }

    insertWord(ver->edges[str[k] - 'a'], str, len, k + 1);
}

long countWord(Vertex *ver, string str, long len, long k)
{
    if (len == k)
        return ver->totalWord;

    if (!ver->edges[str[k] - 'a'])
        return 0;

    return countWord(ver->edges[str[k] - 'a'], str, len, k + 1);
}

void solve()
{
    int n;
    cin >> n;
    Vertex *root = createNode();
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        insertWord(root, s, s.size(), 0);
    }

    cout << countWord(root, "masum", 5, 0);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}