#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int val;
    cin >> val;

    //linear search

    for (int i = 0; i < n; i++)
    {
        if (val == arr[i])
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
