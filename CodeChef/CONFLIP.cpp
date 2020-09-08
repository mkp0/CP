#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        while (num--)
        {
            int a, b;
            long long n, head, tail;
            cin >> a >> n >> b;

            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
            }
            else
            {
                if (a == b)
                {
                    cout << n / 2 << endl;
                }
                else
                {
                    cout << n / 2 + 1 << endl;
                }
            }
        }
    }
    return 0;
}