//HackerRank
#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    if (a > b)
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
    int l, gl, i;
    cin >> l >> gl;

    long long arr[l], ans = 0;

    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + l, comp);

    for (i = 0; i < l; i++)
    {
        ans += (i / gl + 1) * arr[i];
    }

    cout << ans;
    return 0;
}