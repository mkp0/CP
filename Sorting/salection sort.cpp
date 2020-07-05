#include <bits/stdc++.h>

using namespace std;

void selectionsort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int minn = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minn])
                minn = j;
        }
        arr[i] = arr[i] + arr[minn];
        arr[minn] = arr[i] - arr[minn];
        arr[i] = arr[i] - arr[minn];
    }
}

int main()
{
    int arr[] = {4, 11, 8, 1, 6};

    selectionsort(arr, 5);

    for (auto x : arr)
        cout << x << endl;

    return 0;
}
