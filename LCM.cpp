//LCM of Two Number
#include<bits/stdc++.h>

using namespace std;

int gcd(int a , int b )
{
    if(b==0) return a;

    else return gcd(b , a%b);
}

int lcm(int a , int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);

    return 0;
}
