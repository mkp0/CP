//Check if any elemnet is present or not in the array
#include <bits/stdc++.h>

using namespace std;

bool find(int *arr, int len, int val)
{
    if (len < 0)
    {
        return false;
    }
    if (arr[len] == val)
    {
        return true;
    }
    int small = find(arr, len - 1, val);
    return small;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 3, 11};
    cout << find(arr, 5, 6);
    return 0;
}