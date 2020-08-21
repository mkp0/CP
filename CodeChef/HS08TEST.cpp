#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    float b;
    cin >> a >> b;

    if (a % 5 != 0)
    {
        printf("%.2f", b);
        return 0;
    }
    else
    {
        if ((float)a + 0.5 > b)
        {
            printf("%.2f", b);
            return 0;
        }
        printf("%.2f", b - (float)a - 0.5);
    }

    return 0;
}