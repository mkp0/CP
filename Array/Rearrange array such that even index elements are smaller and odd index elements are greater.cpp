// Rearrange array such that even index elements are smaller and odd index elements are greater

#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void func(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        if (i % 2 == 0 && arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        else if (i % 2 == 1 && arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {6, 4, 2, 1, 8, 3};
    func(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}