int getMid(int s, int e) { return s + (e - s) / 2; }

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    int mid = getMid(ss, se);
    st[si] = min(constructSTUtil(arr, ss, mid, st, si * 2 + 1),
                 constructSTUtil(arr, mid + 1, se, st, si * 2 + 2)); //change according to the problem
    return st[si];
}

int *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));

    int max_size = 2 * (int)pow(2, x) - 1;

    int *st = new int[max_size];

    constructSTUtil(arr, 0, n - 1, st, 0);

    return st;
}

int getUtil(int *st, int ss, int se, int qs, int qe, int si)
{

    if (qs <= ss && qe >= se)
        return st[si];

    if (se < qs || ss > qe)
        return INT_MAX;

    int mid = getMid(ss, se);
    return min(getUtil(st, ss, mid, qs, qe, 2 * si + 1),
               getUtil(st, mid + 1, se, qs, qe, 2 * si + 2)); //change according to the problem
}

/* The functions returns the
 min element in the range
 from a and b */
int RMQ(int st[], int n, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        /* invalid input */
        return -1;
    }

    return getUtil(st, 0, n - 1, qs, qe, 0);
}