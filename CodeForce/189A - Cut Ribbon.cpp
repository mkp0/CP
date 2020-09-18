#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> m;

int func(int n, int a, int b, int c)
{
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = INT_MIN;
    }
    arr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a <= i)
        {
            arr[i] = max(arr[i], arr[i - a] + 1);
        }
        if (b <= i)
        {
            arr[i] = max(arr[i], arr[i - b] + 1);
        }
        if (c <= i)
        {
            arr[i] = max(arr[i], arr[i - c] + 1);
        }
    }

    return arr[n];
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << func(n, a, b, c);
    return 0;
}