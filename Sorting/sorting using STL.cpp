//Sorting kis trh kre qki sorting m bhuut jaada dimag lgta h
//using STL method sort(start it,last it +1, comp(OPTIONAL));

#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b)
{
    if (a > b)
        return true;
    else
        return false;
}

int main()
{
    int arr[] = {1, 2, 5, 4, 7, 8, 3, 45, 42, 41, 55};
    sort(arr, arr + 11, comp);

    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }

    cout << endl;

    return 0;
}