#include <bits/stdc++.h>

using namespace std;

bool check(string str, int x)
{
    if (str.size() == 0 || (x * 2) > str.size())
    {
        return true;
    }
    bool ans = false;
    if (str[x] == str[str.size() - x - 1])
    {
        ans = check(str, x + 1);
    }
    return ans;
}

int main()
{
    string str = "hellolleh";
    cout << check(str, 0);
    return 0;
}