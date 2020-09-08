#include <bits/stdc++.h>

using namespace std;

int func(vector<int> v, int end, int ind)
{
    if (end == 0)
    {
        return 1;
    }
    if (ind >= v.size() || end <= 0)
    {
        return 0;
    }
    return func(v, end - v[ind], ind + 1) || func(v, end, ind + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        bool isSub = func(v, b, 0);
        if (isSub)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}