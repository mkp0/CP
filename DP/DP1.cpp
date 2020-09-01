#include <bits/stdc++.h>

using namespace std;

long long arr[10000] = {0};

long long fab(int num, long long *arr)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    if (arr[num] == 0)
    {
        arr[num] = fab(num - 1, arr) + fab(num - 2, arr);
    }
    return arr[num];
}

int main()
{
    int num;
    cin >> num;
    cout << fab(num, arr);
    return 0;
}