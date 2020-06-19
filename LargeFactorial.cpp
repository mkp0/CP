//Factorial of Large Number

#include<bits/stdc++.h>

using namespace std;

int mul(int a , int arr[] , int len)
{
    int carry = 0;

    for(int i = 0 ; i < len ; i++)
    {
        arr[i] = arr[i]*a+carry;
        carry = arr[i]/10;
        arr[i] = arr[i]%10;
    }

    while(carry)
    {
        arr[len] = carry%10;
        carry = carry/10;
        len++;
    }

    return len;
}

long long fact(int a)
{
    int res[1000];
    res[0]=1;
    int len = 1;

    for(int i = 2 ; i <= a ; i++)
    {
        len = mul(i,res,len);
    }

    for(int i = len-1 ; i>=0 ; i--)
    {
        cout<<res[i];
    }

}

int main()
{
    int a;
    cin>>a;

    fact(a);

    return 0;
}

