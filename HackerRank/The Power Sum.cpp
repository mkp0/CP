//HackerRank
#include <bits/stdc++.h>
using namespace std;

int ans = 0, p;

int func(int num, int x)
{
    if (num == 0)
    {
        ans++;
    }
    if (num < 0)
    {
        return 0;
    }

    int n2;

    for (int i = x; n2 >= 0; i++)
    {
        n2 = num - (int)(pow(i, p));
        func(n2, i + 1);
    }
    return 0;
}

int main()
{
    int num;
    cin >> num >> p;
    func(num, 1);
    cout << ans;
    return 0;
}