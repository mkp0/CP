bool isMaxHeap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i * 2 + 1 < n)
        {
            if (arr[i * 2 + 1] > arr[i])
                return false;
        }
        if (i * 2 + 2 < n)
        {
            if (arr[i * 2 + 2] > arr[i])
                return false;
        }
    }
    return true;
}