#include<bits/stdc++.h>

using namespace std;

int main()
{

    string a;
    cin>>a;
    unsigned long long num,cou = 0,temp = 0,ans;
    cin>>num;

    for(unsigned long long i = 0 ; i < a.size() ; i++)
    {
        if(a[i]=='a')
           {
               cou++;
               if((num%a.size())>i)
                temp++;
           }
    }
    ans = cou*(num/a.size())+temp;
    cout<<ans;



    return  0;
}
