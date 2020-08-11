#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    if (b > a)
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
    int num, ans = 0, maxx = 0;
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num - 2; i++)
    {
        if ((arr[i] + arr[i + 1] < arr[i + 2]) && (arr[i + 2] + arr[i + 1] < arr[i]) && (arr[i] + arr[i + 2] < arr[i + 1]))
        {
            continue;
        }
        if (arr[i] + arr[i + 1] + arr[i + 2] > maxx)
        {
            ans = i;
        }
    }

    if (ans == 0)
    {
        cout << -1;
        return 0;
    }
    cout << arr[ans] << " " << arr[ans + 1] << " " << arr[ans + 2];

    return 0;
}