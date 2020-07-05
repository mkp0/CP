#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 5, 7, 8, 5};
    vector<int> vec(7, 0);

    //accumulate(it first , it last,intial value) return (sum of all element + initial value)
    cout << "Sum of the range : " << accumulate(arr, arr + 7, 0) << endl;

    //rotate(first it , it about which container rotate , last it) rotating array clock wise
    // rotate(arr, arr + 4, arr + 7);

    //rotate_copy(first it , it about which container rotate , last it , target it) vec container will have the value of rotated container while arr does not change
    // rotate_copy(arr, arr + 3, arr + 7, vec.begin());

    cout << "Array : \t";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Vector : \t";
    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}