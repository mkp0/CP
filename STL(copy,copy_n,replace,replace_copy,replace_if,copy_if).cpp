#include <bits/stdc++.h>

using namespace std;

bool func1(int data)
{
    if (data % 2 == 0)
        return true;
    else
    {
        return false;
    }
}

bool func2(int data)
{
    if (data % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool func3(int data)
{
    if (data % 2 == 0)
        return true;
    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {1, 4, 2, 1, 7, 8};
    vector<int> vec(6, 0);

    //copy(it first,it last+1,target it)
    // copy(arr, arr + 6, vec.begin());

    //copy_n(it first,no of items,target it)
    // copy_n(arr, 6, vec.begin());

    //replace(it first,it last,old value,new value); replace some perticu value with new value
    // replace(arr, arr + 6, 1, 121);

    //replace_copy() replace only on the copied container
    // replace_copy(arr, arr + 6, vec.begin(), 1, 121);

    //replace_if(first it , last it, function that take a parameter as a value of data. if returns true/false accor to which selected value changes,new value)
    //here we are replacing even value
    // replace_if(arr, arr + 6, func1, 123);

    //replace_if(first it , last it, function that take a parameter as a value of data. if returns true/false accor to which selected value changes in the target conatiner and nothing else changes,new value)
    //here we are replacing even value
    // replace_copy_if(arr, arr + 6, vec.begin(), func2, 123);

    //copy_if(first it , last it,target it,function which determine constion) do just like its name says
    // copy_if(arr, arr + 6, vec.begin(), func3);


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