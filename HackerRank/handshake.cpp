//HackerRank
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int person;
        cin >> person;

        cout << (person * (person - 1)) / 2 << endl;
    }

    return 0;
}