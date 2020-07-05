//Extended Eulid Theorem

#include <bits/stdc++.h>
using namespace std;

int ExtendEulidGCD(int a, int b, int *x, int *y)
{
    if (a == 0) //Terminating Condition of Recursion
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1; //Newer x & y
    ExtendEulidGCD(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return b; //  b===GCD(a,b) if (a==0)
}

int main()
{
    int a, b, x, y;
    cout << "Enput a : ";
    cin >> a;
    cout << "Enput b : ";
    cin >> b;

    ExtendEulidGCD(a, b, &x, &y);

    cout << x << " " << y << endl;

    return 0;
}