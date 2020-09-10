#include <iostream>

using namespace std;

int main()
{
    long long l;
    cin >> l;
    long long temp, s = 0;
    for (int i = 0; i < l; i++)
    {
        cin >> temp;
        s += temp;
    }

    if (s == (l * (l + 1) / 2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}