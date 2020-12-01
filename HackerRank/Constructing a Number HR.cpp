#include <bits/stdc++.h>

using namespace std;

// Complete the canConstruct function below.
bool canConstruct(vector<int> a)
{
    // Return "Yes" or "No" denoting whether you can construct the required number.
    int ans = 0;
    for (auto x : a)
    {
        while (x)
        {
            ans += x % 10;
            x /= 10;
        }
    }

    return (ans % 3 == 0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }

        if (canConstruct(v))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}