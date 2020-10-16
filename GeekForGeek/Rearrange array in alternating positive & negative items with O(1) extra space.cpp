#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = -2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            j += 2;
            swap(arr[j], arr[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}