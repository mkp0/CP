#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        map<int, int> m;
        int n1, n2;
        cin >> n1 >> n2;
        int co = 0;
        for (int i = 0; i < n1; i++)
        {
            int temp;
            cin >> temp;
            m[temp]++;
        }
        for (int i = 0; i < n2; i++)
        {
            int temp;
            cin >> temp;
            m[temp]++;
        }

        cout << m.size() << endl;
    }
    return 0;
}