#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, ans = 1;
    cin >> a;
    int x = pow(10, 9) + 7;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        ans = (temp * ans) % (x);
    }
    cout << ans;

    return 0;
}