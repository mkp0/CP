// C++ program to print all the Repeated Numbers with Frequency in an Array
// Array length : 10 && Array input : 2 5 3 2 4 5 3 6 7 3
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> m1;
    int data;

    for (int i = 0; i < 10; i++)
    {
        cin >> data;
        m1[data]++;
    }

    cout << "Number \t Ferquency" << endl;

    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        if (it->second > 1)
            cout << it->first << "\t" << it->second << endl;
    }
    return 0;
}