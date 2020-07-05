//ARRAY RATATION USING SWAPPING
#include<bits/stdc++.h>

using namespace std;

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    //Rotate 

    for(int i = 0 ; i < 6-1 ; i++)
    {
        swap(&arr[i],&arr[i+1]);
    }

    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}