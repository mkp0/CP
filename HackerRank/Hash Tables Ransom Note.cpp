#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    int a, b;
    cin >> a >> b;
    string arr1[a];
    string arr2[b];

    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
        m[arr1[i]]++;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
        m[arr2[i]]--;
    }

    for (auto i : m)
    {
        if (i.second < 0)
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}