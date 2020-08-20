//Find smallest index of a perticular element
#include <bits/stdc++.h>

using namespace std;

int minI(int *arr, int len, int x, int val)
{
    if (x > len)
    {
        return -1;
    }
    if (arr[x] == val)
    {
        return x;
    }
    int ans = minI(arr, len, x + 1, val);
    return ans;
}
int main()
{
    int arr[] = {1, 2, 5, 4, 6, 3, 4, 2, 5};
    cout << minI(arr, 8, 0, 4);
    return 0;
}