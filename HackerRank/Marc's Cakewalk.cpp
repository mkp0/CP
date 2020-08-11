#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    if (b < a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + num, comp);

    long long ans = 0, temp = 1;
    for (int i = 0; i < num; i++)
    {
        ans += temp * arr[i];
        temp = temp << 1;
    }
    cout << ans << endl;
    return 0;
}