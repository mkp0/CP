//Check if array is sorted in accending order
#include <bits/stdc++.h>

using namespace std;

bool check(int *arr, int len)
{
    if (len == 0)
    {
        return true;
    }
    int ans = false;
    if (arr[len] > arr[len - 1])
    {
        ans = check(arr, len - 1);
    }
    return ans;
}

int main()
{
    int arr[] = {2, 4, 5, 1, 3, 6};

    cout << check(arr, 5) << endl;

    sort(arr, arr + 6);
    cout << check(arr, 5);

    return 0;
}