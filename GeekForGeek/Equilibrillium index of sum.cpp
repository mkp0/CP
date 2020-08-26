//Equilibrillium index of sum
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    int l = 3;

    int s = 0, sl = 0;

    for (int i = 0; i < l; i++)
    {
        s += a[i];
    }

    for (int i = 0; i < l; i++)
    {
        if (sl == (s - sl - a[i]))
        {
            cout << i << endl;
            return 0;
        }
        sl += a[i];
    }

    cout << -1 << endl;

    return 0;
}