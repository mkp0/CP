//Rotate using reverse


#include<bits/stdc++.h>

using namespace std;

void swap(int* a , int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void Reverse(int arr[] , int start , int last)
{
    while(start<last)
    {
        swap(arr[start], arr[last]);
        start++;
        last--;
    }
}

int Rotate(int arr[] , int n , int d)
{
    Reverse(arr , 0 , d-1);
    Reverse(arr , d , n-1);
    Reverse(arr , 0 , n-1);

    return 0;
}


int main()
{
    int n, d;
    cin>>n>>d;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    Rotate(arr , n , d);

    for(int i = 0 ; i <  n ; i++)
    {
        cout<<arr[i] << " ";
    }

    return 0;
}
