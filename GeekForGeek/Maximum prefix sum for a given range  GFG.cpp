struct Node
{
    int su;
    int pref;
};

const int MAXN = 10001;
int N, M;
Node t[4 * MAXN]; // "a" is the array from which we build segment Tree "t"

//define your custom nullv and merge() below.
//merge(x, nullv) must return x for all x
Node merge(Node a, Node b)
{
    Node temp;
    temp.su = a.su + b.su;
    temp.pref = max(a.pref, a.su + b.pref);
    return temp;
}

void build(int n, int lo, int hi, int a[])
{
    if (lo == hi)
    {
        t[n].su = a[lo];
        t[n].pref = a[lo];
        return;
    }

    build(2 * n + 1, lo, (lo + hi) / 2, a);
    build(2 * n + 2, (lo + hi) / 2 + 1, hi, a);

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
        nullv.su = -1;
        nullv.pref = -1;
        return nullv;
    }
    if (lo >= qstart && hi <= qend)
        return t[n];

    int mid = (lo + hi) / 2;

    if (qend <= mid)
    {
        return query(2 * n + 1, lo, mid);
    }
    else if (qstart > mid)
    {
        return query(2 * n + 2, mid + 1, hi);
    }

    return merge(query(2 * n + 1, lo, mid),
                 query(2 * n + 2, mid + 1, hi));
}

vector<int> maxPrefixes(int A[], int L[], int R[], int n, int Q)
{
    build(0, 0, n - 1, A);
    vector<int> ans;
    for (int i = 0; i < Q; i++)
    {
        qstart = L[i];
        qend = R[i];
        ans.push_back(query(0, 0, n - 1).pref);
    }
    return ans;
}