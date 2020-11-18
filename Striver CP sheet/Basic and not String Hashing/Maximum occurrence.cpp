#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[200] = {0};

    string s;
    getline(cin, s);

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        arr[s[i]]++;
    }

    int maxi = 0;
    char val;

    for (int i = 199; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            maxi = arr[i];
            val = i;
        }
    }

    cout << val << " " << maxi << endl;
    return 0;
}