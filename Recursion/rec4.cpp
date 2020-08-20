//Printing till number
#include <bits/stdc++.h>

using namespace std;

void print(int num)
{
    if (num == 0)
    {
        return;
    }
    print(num - 1);
    cout << num << " ";
}

int main()
{
    int num;
    cin >> num;

    print(num);
    return 0;
}