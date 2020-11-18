#include <bits/stdc++.h>

using namespace std;

void createZarray(string str, int Z[])
{
    int n = str.length();
    int L, R, k;
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
            while (R < n && str[R - L] == str[R])
                R++;
            Z[i] = R - L;
            R--;
        }
        else
        {
            k = i - L;
            if (Z[k] < R - i + 1)
                Z[i] = Z[k];
            else
            {
                L = i;
                while (R < n && str[R - L] == str[R])
                    R++;
                Z[i] = R - L;
                R--;
            }
        }
    }
}
int co = 0;
int zAlgorithm(string text, string pattern)
{
    co = 0;
    string str = pattern + "*" + text;
    int len = str.length();
    int Z[len];
    createZarray(str, Z);
    for (int i = 0; i < len; ++i)
    {
        if (Z[i] == pattern.length())
            co++;
    }

    return co;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c1 = zAlgorithm(s, "SUVO");
        int c2 = zAlgorithm(s, "SUVOJIT");

        cout << "SUVO = " << c1 - c2 << ", SUVOJIT = " << c2 << endl;
    }
}