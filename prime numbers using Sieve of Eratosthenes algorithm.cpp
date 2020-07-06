// C++ program to find prime numbers using Sieve of Eratosthenes algorithm

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cout << "Enput Number : ";
    cin >> num;
    vector<int> vec(num + 1, 1);

    for (int i = 2; i * i <= num; i++)
    {
        if (vec[i] == 1)
        {
            for (int j = i; j * i <= num; j++)
            {
                vec[i*j] = 0;
            }
        }
    }

    cout << endl;
    cout << "Primes : ";
    for (int i = 2; i <= num; i++)
    {
        if (vec[i] == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}