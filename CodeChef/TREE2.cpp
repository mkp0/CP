#include <bits/stdc++.h>

using namespace std;

bool comp(long long a, long long b)
{
    if (a > b)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, a = 0, f = 0;
        cin >> l;
        long long arr[l];

        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + l, comp);

        for (int i = 1; i < l; i++)
        {
            if (arr[f] > arr[i])
            {
                a += 1;
                f = i;
            }
        }

        if (arr[l - 1] != 0)
        {
            a += 1;
        }

        cout << a << endl;
    }

    return 0;
}