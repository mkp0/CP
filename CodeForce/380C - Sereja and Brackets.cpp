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
int mod = 1e9 + 7;

const int MAXN = 1000000;
int N, M; // "a" is the array from which we build segment Tree "t"
string s;
struct Node
{
    int val;
    int ope;
    int clo;
};

Node t[4 * MAXN];
//define your custom nullv and merge() below.
//merge(x, nullv) must return x for all x
Node merge(Node a, Node b)
{
    Node temp;
    int x = min(a.ope, b.clo);
    temp.val = a.val + b.val + x;
    temp.ope = a.ope + b.ope - x;
    temp.clo = a.clo + b.clo - x;
    return temp;
}

void build(int n, int lo, int hi)
{
    if (lo == hi)
    {
        t[n].val = 0;
        if (s[lo] == '(')
        {
            t[n].ope = 1;
            t[n].clo = 0;
        }
        else
        {
            t[n].clo = 1;
            t[n].ope = 0;
        }
        return;
    }
    build(2 * n + 1, lo, (lo + hi) / 2);
    build(2 * n + 2, (lo + hi) / 2 + 1, hi);
    t[n] = merge(t[2 * n + 1], t[2 * n + 2]);
}

//x and y must be manually set before each call to the
//functions below. For query(), [x, y] is the range to
//be considered. For update(), a[x] is to be set to y.
int qstart, qend;

//merge(a[i] for i = x..y, inclusive)
Node query(int n, int lo, int hi)
{
    if (hi < qstart || lo > qend)
    {
        Node nullv;
        nullv.clo = 0;
        nullv.ope = 0;
        nullv.val = 0;
        return nullv;
    }
    if (lo >= qstart && hi <= qend)
        return t[n];

    return merge(query(2 * n + 1, lo, (lo + hi) / 2),
                 query(2 * n + 2, (lo + hi) / 2 + 1, hi));
}

void solve()
{
    cin >> s;
    int n = s.size();
    build(0, 0, n - 1);
    int q;
    cin >> q;

    while (q--)
    {
        cin >> qstart >> qend;
        qstart--;
        qend--;
        cout << 2 * query(0, 0, n - 1).val << endl;
    }
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