//Last index of element in the arr of given value

#include <bits/stdc++.h>

using namespace std;

int maxI(int *arr, int len, int val)
{
    if (len < 0)
    {
        return -1;
    }
    if (arr[len] == val)
    {
        return len;
    }
    int ans = maxI(arr, len - 1, val);
    return ans;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 6, 3, 4, 2, 5};
    cout << maxI(arr, 8, 4);
    return 0;
}