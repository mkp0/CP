#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    ll val = 0, co = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            val = arr[i] + val;
            co++;
        }
    }

    if (co > 0)
    {
        cout << val << " " << co << endl;
    }
    else
    {
        cout << maxi << " " << 1 << endl;
    }

    return 0;
}