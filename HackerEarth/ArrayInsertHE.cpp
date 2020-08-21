#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len, que;
    cin >> len >> que;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    while (que--)
    {
        int q;
        cin >> q;

        int a, b;
        cin >> a >> b;

        switch (q)
        {
        case 1:
        {
            arr[a] = b;
        }
        break;
        case 2:
        {
            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                sum += arr[i];
            }
            cout << sum << endl;
        }
        break;
        }
    }
}