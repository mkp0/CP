#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    long long change[n + 1];
    memset(change, 0, sizeof(change));
    change[0] = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = arr[i]; j <= n; j++)
        {
            change[j] += change[j - arr[i]];
        }
    }

    cout << change[n];
    return 0;
}