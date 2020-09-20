#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, ans = 0, con;
        cin >> x;
        con = pow(2, 1) - 1;
        for (int i = 2; x >= con * (con + 1) / 2; i++)
        {
            ans++;
            x -= con * (con + 1) / 2;
            con = pow(2, i) - 1;
        }
        cout << ans << endl;
    }
    return 0;
}