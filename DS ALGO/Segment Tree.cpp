int getMid(int s, int e) { return s + (e - s) / 2; }

int getUtil(int *st, int ss, int se, int qs, int qe, int si)
{

    if (qs <= ss && qe >= se)
        return st[si];

    if (se < qs || ss > qe)
        return 0;

    int mid = getMid(ss, se);
    return getUtil(st, ss, mid, qs, qe, 2 * si + 1) ^
           getUtil(st, mid + 1, se, qs, qe, 2 * si + 2); //change according to the problem
}

void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
    if (i < ss || i > se)
        return;

    st[si] = st[si] + diff;
    if (se != ss)
    {
        int mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2 * si + 1);
        updateValueUtil(st, mid + 1, se, i, diff, 2 * si + 2);
    }
}

void updateValue(int arr[], int *st, int n, int i, int new_val)
{
    if (i < 0 || i > n - 1)
    {
        /* invalid input */
        return;
    }

    int diff = new_val - arr[i];

    arr[i] = new_val;

    updateValueUtil(st, 0, n - 1, i, diff, 0);
}

int get(int *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n - 1 || qs > qe)
    {
        /* invalid input */
        return -1;
    }

    return getUtil(st, 0, n - 1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    int mid = getMid(ss, se);
    st[si] = constructSTUtil(arr, ss, mid, st, si * 2 + 1) ^
             constructSTUtil(arr, mid + 1, se, st, si * 2 + 2); //change according to the problem
    return st[si];
}

int *constructST(int arr[], int n)
{

    int x = (int)(ceil(log2(n)));

    int max_size = 2 * (int)pow(2, x) - 1;

    int *st = (int *)malloc(sizeof(int) * max_size);

    constructSTUtil(arr, 0, n - 1, st, 0);

    return st;
}

/*
    Build segment tree from given array 
    int *st = constructST(arr, n);  
*/