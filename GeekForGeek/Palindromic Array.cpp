#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //main code
    int ans = 0;
    for (int i = 0, j = n - i - 1; j > i;)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            ans++;
            if (arr[i] > arr[j])
            {
                arr[j - 1] += arr[j];
                j--;
            }
            else
            {
                arr[i + 1] += arr[i];
                i++;
            }
        }
    }

    cout << ans << endl;
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