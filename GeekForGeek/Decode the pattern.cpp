#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> v1, v2;
    v1.push_back(1);
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (auto x = v1.begin(); x != v1.end(); x++)
        {
            int co = 1;
            int temp = *x;
            while ((x + 1) != v1.end() && temp == *(x + 1))
            {
                co++;
                x++;
            }
            v2.push_back(co);
            v2.push_back(temp);
        }
        v1.clear();
        for (auto x : v2)
        {
            v1.push_back(x);
        }
        v2.clear();
    }

    for (auto x : v1)
    {
        cout << x << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}