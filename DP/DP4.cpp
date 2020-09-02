//Wine Shop
#include <bits/stdc++.h>

using namespace std;

int memo[100][100];

int maxP(int arr[], int f, int e, int year)
{
    if (f > e)
    {
        return 0;
    }

    if (memo[f][e] != -1)
    {
        return memo[f][e];
    }
    int p1 = arr[f] * year + maxP(arr, f + 1, e, year + 1);
    int p2 = arr[e] * year + maxP(arr, f, e - 1, year + 1);

    memo[f][e] = max(p1, p2);

    return memo[f][e];
}

int main()
{
    int l;
    cin >> l;

    for (int i = 0; i < l; i++)
        for (int j = 0; j < l; j++)
            memo[i][j] = -1;

    int arr[l];

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }

    cout << maxP(arr, 0, l - 1, 1);

    return 0;
}