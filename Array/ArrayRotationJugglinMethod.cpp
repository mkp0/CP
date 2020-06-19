//O(n) time with O(1) time complexity
#include<bits/stdc++.h>

using namespace std;

int gcd(int n , int d)
{
    if(d==0) return n;

    return gcd(d,n%d);
}

int LeftRotate(int arr[],int n , int d)
{
    int g_c_d = gcd(n,d);

    for(int i = 0 ; i < g_c_d ; i++)
    {
        int j = i;
        int temp = arr[i];

        while(1)
        {
            int k = j + d;
            if(k>=n)
                k = k - n;
            if(k==i)
                break;
            arr[j] = arr[k];
            j = k;
        }

        arr[j] = temp;
    }
}

int main()
{
    int arr[1000],n,d;
    cin>>n>>d;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    LeftRotate(arr,n,d);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
