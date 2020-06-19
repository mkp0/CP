#include<bits/stdc++.h>

using namespace std;

vector<int> arr(1000,-1);

int fab(int a)
{
    if(a<=1)
        return a;

    int temp;

    for(int i = 2 ; i <= a ; i++)
    {
        temp = arr[i-1] + arr[i-2];
        arr[i] = temp;
    }

    return arr[a];

}

int main()
{
    arr[0] = 0;
    arr[1] = 1;

    int a;
    cin>>a;

    cout<<fab(a);
    return 0;
}
