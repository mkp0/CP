#include <bits/stdc++.h>

using namespace std;

class Triplet
{
public:
    int x;
    int y;
    int gcd;
};

Triplet func(int a, int b)
{
    Triplet ans;
    if (b == 0)
    {
        ans.x = 1;
        ans.y = 0;
        ans.gcd = a;
        return ans;
    }

    ans = func(b, a % b);
    int y = ans.y;
    ans.y = ans.x - ans.y * (a / b);
    ans.x = y;

    return ans;
}

int main()
{
    int a = 16;
    int b = 10;

    Triplet ans = func(a, b);
    cout << ans.gcd << " ";
    cout << ans.x << " ";
    cout << ans.y << " ";

    return 0;
}