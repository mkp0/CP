#include<iostream>
using namespace std;

int main()
{
    int  num,co=0,maxx=0,temp;
    cin>>num;

    int arr[num];

    for(int i = 0 ; i < num ; i++)
        cin>>arr[i];

    for(int i = 0 ; i < num ; i++)
    {
        co = 0;
        temp = i+1;
        while(arr[i]<arr[temp] && temp<num && arr[temp]>arr[temp-1])
        {
            co++;
            temp++;
        }
        if(co>maxx)
        maxx = co;
            cout<<co<<endl;
    }


    return 0;
}
