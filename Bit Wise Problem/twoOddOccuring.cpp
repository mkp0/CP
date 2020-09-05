#include <bits/stdc++.h>

using namespace std;

void printOdds(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum ^= arr[i];
    }

    int firstOne = xorSum & (~(xorSum - 1));

    int num1 = 0, num2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (firstOne & arr[i])
        {
            num1 ^= arr[i];
        }
        else
        {
            num2 ^= arr[i];
        }
    }

    cout << num1 << " " << num2;
}

int main()
{
    int arr[] = {2, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printOdds(arr, n);
    return 0;
}