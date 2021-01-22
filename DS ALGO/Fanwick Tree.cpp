int get(int BITree[], int index)
{
    int sum = 0;
    index = index + 1;
    while (index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}

void updateBIT(int BITree[], int n, int index, int val)
{
    index = index + 1;
    while (index <= n)
    {
        BITree[index] += val; //change according to the problem
        index += index & (-index);
    }
}

int *constructBITree(int arr[], int n)
{
    int *BITree = new int[n + 1];
    for (int i = 1; i <= n; i++)
        BITree[i] = 0;

    for (int i = 0; i < n; i++)
        updateBIT(BITree, n, i, arr[i]);
    return BITree;
}

/*
    Build segment tree from given array 
    int *ft = constructST(arr, n);  
*/