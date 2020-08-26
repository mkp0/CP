//Maximum circular subarray sum
#include <bits/stdc++.h>

using namespace std;

int k(int arr[], int l)
{
    int a = *max_element(arr, arr + l);
    int b = 0;

    for (int i = 0; i < l; i++)
    {
        if (b + arr[i] > 0)
        {
            b += arr[i];
        }
        if (b > a)
        {
            a = b;
        }
        if (b < 0)
        {
            b = 0;
        }
    }
    return a;
}

int func(int arr[], int l)
{
    int s = accumulate(arr, arr + l, 0);
    int a = k(arr, l);

    //Making negative all
    for (int i = 0; i < l; i++)
    {
        arr[i] = -arr[i];
    }
    int b = k(arr, l);

    return max(b + s, a);
}

int main()
{
    int arr[] = {11, 10, -20, 5, -3, -5, 8, -13, 10};
    cout << func(arr, 9);
    return 0;
}