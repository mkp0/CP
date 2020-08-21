#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    cin >> x;
    int k;
    cin >> k;

    for (int i = 0; i < x.size(); i++)
    {
        if (k == 0)
        {
            break;
        }
        if (x[i] != '9')
        {
            x[i] = '9';
            k--;
        }
    }
    cout << x;
    return 0;
}