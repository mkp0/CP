#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        long long temp, sum = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> temp;
            sum += (temp % l);
        }

        if (sum % l == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}