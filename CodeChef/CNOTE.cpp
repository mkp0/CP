#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, n;
        bool isLucky = false;
        cin >> x >> y >> k >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            if (k >= b && (x - y) <= a)
            {
                isLucky = true;
            }
        }
        if (isLucky)
        {
            cout << "LuckyChef" << endl;
        }
        else
        {
            cout << "UnluckyChef" << endl;
        }
    }
    return 0;
}