#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2;

        //as (x2,y2) is the mid-point of (x1,y1) and (x3,y3)
        x3 = 2 * x2 - x1;
        y3 = 2 * y2 - y1;

        cout << x3 << " " << y3 << endl;
    }
    return 0;
}