//Find subarray with given sum
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 4, 0, 0, 3, 10, 5};
    int g_sum = 7;

    //Brute force approce two loop i and j and all

    //Efficient Approch
    int sum = 0, j = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
        while (g_sum < sum && j <= i)
        {
            sum -= arr[j];
            j++;
        }
        if (sum == g_sum)
        {
            cout << j << " " << i << endl;
            return 0;
        }
    }
    cout << "Not possible";
    return 0;
}