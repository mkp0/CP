#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        if (k > n)
        {
            cout << 0 << endl;
        }
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                q.push(make_pair(arr[i], i));
            }
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            if (!q.empty())
            {
                if (i >= q.front().second - k + 1 && i <= q.front().second)
                {
                    cout << q.front().first << " ";
                    if (i == q.front().second)
                    {
                        q.pop();
                    }
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}