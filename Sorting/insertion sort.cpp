#include <bits/stdc++.h>

using namespace std;

void insertionsort(int arr[], int len)
{
    int key;
    int j;
    for (int i = 1; i < len; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > key)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {11, 4, 7, 5, 2, 3, 1};

    insertionsort(arr, 7);

    for (auto x : arr)
        cout << x << endl;

    return 0;
}
