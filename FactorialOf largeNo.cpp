#include<bits/stdc++.h>

using namespace std;

int mul(int x,int res[],int arrsize)
{
    int carry = 0;

    for(int i = 0 ; i < arrsize ; i++)
    {
        int prod = res[i]*x + carry;
        res[i] = prod%10;
        carry = prod/10;
    }

    while(carry)
    {
        res[arrsize] = carry%10;
        carry = carry/10;
        arrsize++;
    }

    return arrsize;
}

void factorial(int n)
{
    int res[500];
    res[0] = 1;
    int arrsize = 1;

    for(int i = 2 ; i<=n ;i++)
    {
        arrsize = mul(i,res,arrsize);
    }

    for(int i = arrsize-1 ; i>=0 ;i--)
    {
        cout<<res[i];
    }

}

int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
