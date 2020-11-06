#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to rarrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n)
{
    long long MAX = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MAX)
        {
            MAX = arr[i];
        }
    }

    MAX++;

    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[arr[i]] % MAX) * MAX + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] /= MAX;
    }
}

// { Driver Code Starts.

int main()
{

    int t;
    //testcases
    cin >> t;
    while (t--)
    {

        int n;
        //size of array
        cin >> n;
        long long A[n];

        //adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        //calling arrange() function
        arrange(A, n);

        //printing the elements
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends