//Check no of 1's in binary form
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num,coun=0;
    cin>>num;

    while(num)
    {
        num = (num&(num-1));
        coun++;
    }

    cout<<coun;

    return 0;
}
