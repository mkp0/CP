//Geometric sum ex input : 4 outpur : 1 + 1/2 + 1/4 + 1/8 + 1/16 (in float value)

#include <bits/stdc++.h>

using namespace std;

double Gsum(int num, int pos)
{
    if (pos > num)
    {
        return 0;
    }
    double small = Gsum(num, pos + 1);
    return small + (1.0 / pow(2, pos));
}

int main()
{
    int num;
    cin >> num;
    cout << Gsum(num, 0);
    return 0;
}