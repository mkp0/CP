//Hackerrank Manasa and stone
#include <bits/stdc++.h>

using namespace std;

set<int> ans;

void sol(int a, int b, int stones, int totalStones)
{
    ans.insert(a * (stones - 1) + b * (totalStones - stones));

    if (stones == 1)
    {
        return;
    }
    sol(a, b, stones - 1, totalStones);
}

int main()
{

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int stones, a, b;
        cin >> stones;
        cin >> a >> b;
        sol(a, b, stones, stones);

        for (auto x : ans)
        {
            cout << x << " ";
        }

        cout << endl;
        ans.clear();
    }
    return 0;
}