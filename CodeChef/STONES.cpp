#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        long long ans = 0;
        string a, b;
        getline(cin, a);
        getline(cin, b);

        bool arr[256];

        for (int i = 0; i < 256; i++)
        {
            arr[i] = false;
        }
        for (int i = 0; i < a.size(); i++)
        {
            arr[a[i]] = true;
        }
        for (int i = 0; i < b.size(); i++)
        {
            ans += arr[b[i]];
        }
        cout << ans << endl;
    }
    return 0;
}