// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
void rearrange(long long *arr, int n) 
{ 
	
    long long MAX = arr[n-1] + 1;
    int mi = 0 , ma = n-1;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(i%2==0)
        {
            arr[i] = (arr[ma]%MAX)*MAX + arr[i];
            ma--;
        }else{
            arr[i] = (arr[mi]%MAX)*MAX + arr[i];
            mi++;
        }
    }
	 
	 for(int i = 0 ; i < n ; i++)
	 {
	    arr[i] =  arr[i]/MAX;
	 }
	 
}

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        //calling rearrange() function
        rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends