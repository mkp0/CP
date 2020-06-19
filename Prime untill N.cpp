#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void func(int num)
{
    bool prime[num+1];
    memset(prime,true,sizeof(prime));

    for(int i = 2 ; i*i <= num ; i++)
    {
        if(prime[i])
            for(int p = i*i ; p <= num ; p = p + i)
            prime[p] = false;
    }

    for(int i = 2 ; i <= num ; i++)
    {
        if(prime[i])
            cout<<i<<" ";
    }
}

int main()
{
    int num;
    cin>>num;
    func(num);
    return 0;
}
