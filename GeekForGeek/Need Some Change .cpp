void swapElements(int arr[], int sizeof_array)
{

    if (sizeof_array < 2)
    {
        return;
    }
    for (int i = 0; i < sizeof_array - 2; i++)
    {
        int x = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = x;
    }
    return;
}