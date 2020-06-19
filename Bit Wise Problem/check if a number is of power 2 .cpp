//Check if 2^n or not
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin>>num;

    cout<<(num&&(num&(num-1)));
    return 0;
}
