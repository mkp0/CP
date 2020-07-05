// we are using LCM(a,b) = (a*b)/gcd(a,b)
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int arr[], int len)
{
    int ans = arr[0];

    for (int i = 1; i < len; i++)
    {
        ans = (ans * arr[i]) / gcd(ans, arr[i]);
    }

    return ans;
}

int main()
{
    int arr[] = {2, 7, 3, 9, 4};

    cout << lcm(arr, 5) << endl;

    return 0;
}