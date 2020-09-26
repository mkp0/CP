#include <iostream>
using namespace std;

int memo[10001];

void sieveoe(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (memo[i] == 1)
        {
            for (int j = i + i; j <= n; j += i)
            {
                memo[j] = 0;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            memo[i] = 1;
        }
        sieveoe(n);
        for (int i = 2; i <= n; i++)
        {
            if (memo[i] == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}