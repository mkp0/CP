#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1)
    {
        int num, ans = 0;
        cin >> num;
        if (num == 0)
        {
            exit(0);
        }
        for (int i = 0; i < num; i++)
        {
            ans += (num - i) * (num - i);
        }
        cout << ans << endl;
    }
}