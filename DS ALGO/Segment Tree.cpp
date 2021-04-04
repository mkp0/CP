const int MAXN = 100000;
int N, M, a[MAXN], t[4 * MAXN]; // "a" is the array from which we build segment Tree "t"

//define your custom nullv and merge() below.
//merge(x, nullv) must return x for all x
const int nullv = 1 << 30;
inline int merge(int a, int b) { return a < b ? a : b; }

void build(int n, int lo, int hi)
{
    if (lo == hi)
    {
        t[n] = a[lo];
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
int query(int n, int lo, int hi)
{
    if (hi < qstart || lo > qend)
        return nullv;
    if (lo >= qstart && hi <= qend)
        return t[n];

    return merge(query(2 * n + 1, lo, (lo + hi) / 2),
                 query(2 * n + 2, (lo + hi) / 2 + 1, hi));
}

//a[x] = y
void update(int n, int lo, int hi)
{
    if (hi < qstart || lo > qstart)
        return;
    if (lo == hi)
    {
        t[n] = qend;
        return;
    }
    update(2 * n + 1, lo, (lo + hi) / 2);
    update(2 * n + 2, (lo + hi) / 2 + 1, hi);
    t[n] = merge(t[2 * n + 1], t[2 * n + 2]);
}