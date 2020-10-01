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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> k;
        sort(a, a + n, greater<int>());
        long long sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] - a[i + 1] < k)
            {
                sum += (a[i] + a[i + 1]);
                i++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}