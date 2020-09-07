#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int win = 0, ma = 0, prev_a = 0, prev_b = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        a += prev_a;
        b += prev_b;

        if (a > b)
        {
            if (a - b > ma)
            {
                ma = a - b;
                win = 1;
            }
        }
        else
        {
            if (b - a > ma)
            {
                ma = b - a;
                win = 2;
            }
        }

        prev_a = a;
        prev_b = b;
    }

    cout << win << " " << ma << endl;
    return 0;
}