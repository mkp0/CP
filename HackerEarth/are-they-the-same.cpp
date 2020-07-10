#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[128] = {0}, b[128] = {0}, i, f = 0;
    string s1, s2;

    cin >> s1 >> s2;

    for (int i = 0; i < s1.size();i++)
    {
        a[s1[i]]++;
    }

    for (int i = 0; i < s2.size();i++)
    {
        b[s2[i]]++;
    }

    for (int i = 0; i < 128;i++)
    {
        if(a[i]!=b[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}