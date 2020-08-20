//Count number of digits
#include <bits/stdc++.h>

using namespace std;

int length(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int ans = length(num / 10);
    return ans + 1;
}

int main()
{
    int num;
    cin >> num;
    cout << length(num);
    return 0;
}