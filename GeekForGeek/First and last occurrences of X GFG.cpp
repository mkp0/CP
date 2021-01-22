#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int first = 0;
        int second = 0;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (temp == x)
            {
                if (!first)
                {
                    first = i + 1;
                    second = i + 1;
                }
                else
                {
                    second = i + 1;
                }
            }
        }

        if (!first)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << first - 1 << " " << second - 1 << "\n";
        }
    }

    return 0;
}