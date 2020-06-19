#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    char a[10000];

    for(int i = 0 ; i < x ; i++)
    cin>>a[i];

    int cc = 1,cs = 1,csp = 1,cn = 1;

    for(int i = 0 ; i < x ; i++)
    {
        if('!' <= a[i] && a[i] <= '/')
            csp=0;
        if('0' <= a[i] && a[i] <= '9')
            cn=0;
        if('A' <= a[i] && a[i] <= 'Z')
            cc=0;
        if('a' <= a[i] && a[i] <= 'z')
            cs=0;
    }


    int temp1 = csp+cn+cc+cs;
    int temp2 = 6 - x;

    if(temp2>temp1)
    cout<<temp2;
    else
    cout<<temp1;

    return 0;
}
