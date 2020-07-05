//Quick Sort O(nlog(n)) space complexity O(1)
//Array k last elemtent koo pivot point le k usse k correct postion m daaala ha fir uss point k about array divide kr k simplified array m same process lagana hai
#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int PivotPosFinder(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pos = start - 1;

    for (int i = start; i < end; i++)
    {
        if (pivot > arr[i])
        {
            pos++;
            swap(arr[pos], arr[i]);
        }
    }
    swap(&arr[pos + 1], &arr[end]);
    return pos + 1;
}

void QuickSort(int arr[], int start, int end)
{
    if (start > end) //Braking point of Recurrsion in Quick Sort
    {
        return;
    }
    int pi = PivotPosFinder(arr, start, end);
    QuickSort(arr, start, pi - 1);
    QuickSort(arr, pi + 1, end);
}

int main()
{
    int arr[] = {7, 1, 2, 5, 9, 3, 4, 15, 16, 11};
    QuickSort(arr, 0, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}