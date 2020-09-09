#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = INT_MAX;
        long long sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            m = min(arr[i], m);
        }
        cout << sum - m * n << endl; //logic
    }
    return 0;
}