#include <bits/stdc++.h>

using namespace std;

int multi(int s[], int m, int l)
{
    int carry = 0;

    for (int i = 0; i < l; i++)
    {
        int num = s[i] * m + carry;
        s[i] = num % 10;
        carry = num / 10;
    }

    while (carry)
    {
        s[l] = carry % 10;
        carry /= 10;
        l++;
    }
    return l;
}

void factorial(int n)
{
    int str[10000];
    str[0] = 1;
    int len = 1;

    for (int i = 2; i <= n; i++)
    {
        len = multi(str, i, len);
    }

    for (int i = len - 1; i >= 0; i--)
        cout << str[i];

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}