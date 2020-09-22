#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    int v;
    cin >> v;

    while (v--)
    {
        int temp;
        cin >> temp;
        cout << lower_bound(arr, arr + n, temp) - arr + 1 << endl;
    }
    return 0;
}