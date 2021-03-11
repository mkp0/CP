#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            s.insert(x);
            s.insert(y);
        }

        cout << s.size() << "\n";
    }
    return 0;
}