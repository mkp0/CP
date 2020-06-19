//Rotate Using Reverse Clockwise

#include<bits/stdc++.h>

using namespace std;

void swap(int *a , int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void Reverse(int arr[] , int start , int last)
{
    while(start<last)
    {
        swap(arr[start] , arr[last]);
        start++;
        last--;
    }
}

void Rotate(int arr[] , int n , int d)
{
    Reverse(arr , n-d , n-1);
    Reverse(arr , 0 , n-d-1);
    Reverse(arr , 0 , n-1);
}

int main()
{
    int n , d;
    cin>>n>>d;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    Rotate(arr , n , d);

    for(int i = 0 ; i < n ; i++)
        cout<<arr[i] << " ";


    return 0;
}
