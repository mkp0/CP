#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long a = 0 , b = 1,len;

    cin>>len;

    if(len==1)
    cout<< a ;
    else{
        cout<<a << " " <<b;
        for(int i = 2 ; i < len;i++)
        {
            unsigned long long c = a+b;
            cout<<" "<<c;
            a=b;
            b=c;
        }
    }



    return 0;
}
