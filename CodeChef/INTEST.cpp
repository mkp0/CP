#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, co = 0;
    scanf("%d%d", &a, &b);
    while (a--)
    {
        int x;
        scanf("%d", &x);
        if (x % b == 0)
        {
            co++;
        }
    }
    printf("%d", co);
    return 0;
}