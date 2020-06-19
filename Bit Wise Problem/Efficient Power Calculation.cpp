//logn time to calucale a power

#include<bits/stdc++.h>

using namespace std;

long long power(long long a , long long b)
{
    if(b==0)
        return 1;
    else if(b%2==0)
        return power(a*a , b/2);
    else
        return a*power(a*a , b/2);

}

int main()
{
    int a , b;
    cin>>a>>b;

    cout<<power(a,b);
    return 0;
}
