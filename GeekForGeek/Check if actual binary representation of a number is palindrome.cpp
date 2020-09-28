#include <bits/stdc++.h>

using namespace std;

int binaryPalin(long long int N)
{
    if (N == 0)
    {
        return 1;
    }
    int co = 0;
    int br[100];
    while (N)
    {
        br[co] = N % 2;
        N /= 2;
        co += 1;
    }

    //Check if Palindrone or not
    co--;
    for (int i = 0; i <= co / 2; i++)
    {
        if (br[i] != br[co - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long int n;
    cin >> n;
    cout << binaryPalin(n);

    return 0;
}