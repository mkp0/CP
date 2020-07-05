//ARRAY:- each element is replaced by mul(prev,next) in O(n) time O(1) Space
//exception : 1st element = 1st element * 2nd element ------------ n element = n element * (n-1) element
#include<bits/stdc++.h>

using namespace std;

void func(int arr[] , int len)
{
    //Idea ye h ki hmm previous element koo track krte rhe
    int prev = arr[0];
    //First Element
    arr[0] = arr[0]*arr[1];

    //Remaing Elements
    for(int i = 1 ; i < len-1 ; i++)
    {
        int curr = arr[i];

        arr[i] = arr[i+1]*prev;

        prev = curr;
    }   

    //last Element
    arr[len-1] = arr[len-1] * prev;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    func(arr,7);
    
    //PRINTING results
    for(int i = 0 ; i < 7 ; i++)
    {
        cout<<arr[i] << " ";
    }

    cout<<endl;

    return 0;
}