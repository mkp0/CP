//Prime factorization
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;

    vector <int> vec;

    for(int i = 2 ; i*i <=a ; i++)
    {
        while(a%i == 0)
        {
            vec.push_back(i);
            a/=i;
        }

    }

    if(a!=1)
        vec.push_back(a);


    for(auto i = vec.begin() ; i!= vec.end() ; i++)
    {
        cout<<*i<<" ";
    }



    return 0;
}
