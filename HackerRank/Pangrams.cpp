//Hackerrank
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    map<char, int> m1;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] < 97)
        {
            input[i] = input[i] + 32;
        }
        m1[input[i]]++;
    }

    for (int i = 97; i < 123; i++)
    {
        if (m1[i] == 0)
        {

            cout << "not pangram" << endl;
            return 0;
        }
    }
    cout << "pangram" << endl;

    return 0;
}