#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int routes = 1;
        int towns;
        cin >> towns;
        for (int i = 1; i < towns; i++)
        {
            int route;
            cin>>route;
            routes = route * routes;
        }
        cout << routes << endl;
    }
    return 0;
}