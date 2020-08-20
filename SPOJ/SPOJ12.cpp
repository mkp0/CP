#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a, count = 0;
    cin >> a;

    //Calculating no of rectangle
    for (unsigned long long i = 1; i * i < a; i++)
    {
        for (unsigned long long j = i + 1; j * i <= a; j++)
        {
            count += 1;
        }
    }

    //No of squares is sqrt(a)
    cout << count + (int)sqrt(a);

    return 0;
}